// Copyright (c) 2023 by Rockchip Electronics Co., Ltd. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*-------------------------------------------
                Includes
-------------------------------------------*/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <chrono>

#include "yolov8.h"
#include "image_utils.h"
#include "file_utils.h"
#include "image_drawing.h"

int main(int argc, char **argv)
{
    if (argc != 3) {
        printf("%s <model_path> <image_path>\n", argv[0]);
        return -1;
    }

    const char *model_path = argv[1];
    const char *image_path = argv[2];
    const int   NUM_RUNS   = 100;   // <-- переменная для количества прогонов

    int ret;
    rknn_app_context_t rknn_app_ctx;
    memset(&rknn_app_ctx, 0, sizeof(rknn_app_context_t));

    init_post_process();

    ret = init_yolov8_model(model_path, &rknn_app_ctx);
    if (ret != 0) {
        printf("init_yolov8_model fail! ret=%d\n", ret);
        goto out;
    }

    {   // <- блок нужен: goto не может перепрыгнуть инициализацию переменных C++
        image_buffer_t src_image;
        memset(&src_image, 0, sizeof(image_buffer_t));

        ret = read_image(image_path, &src_image);
        if (ret != 0) {
            printf("read image fail! ret=%d\n", ret);
            if (src_image.virt_addr) free(src_image.virt_addr);
            goto out;
        }

        object_detect_result_list od_results;

        // --- прогрев: один запуск до замера ---
        ret = inference_yolov8_model(&rknn_app_ctx, &src_image, &od_results);
        if (ret != 0) {
            printf("warmup inference fail! ret=%d\n", ret);
            free(src_image.virt_addr);
            goto out;
        }

        // --- цикл замера ---
        double total_ms = 0.0;
        double min_ms   = 1e9;
        double max_ms   = 0.0;

        for (int run = 0; run < NUM_RUNS; run++) {
            auto t_start = std::chrono::steady_clock::now();

            ret = inference_yolov8_model(&rknn_app_ctx, &src_image, &od_results);

            auto t_end = std::chrono::steady_clock::now();

            if (ret != 0) {
                printf("inference fail at run %d! ret=%d\n", run, ret);
                break;
            }

            double elapsed_ms = std::chrono::duration<double, std::milli>(
                                     t_end - t_start).count();
            total_ms += elapsed_ms;
            if (elapsed_ms < min_ms) min_ms = elapsed_ms;
            if (elapsed_ms > max_ms) max_ms = elapsed_ms;

            // прогресс каждые 100 итераций
            if ((run + 1) % 100 == 0) {
                printf("  [%4d/%d] last=%.2f ms  avg=%.2f ms\n",
                       run + 1, NUM_RUNS,
                       elapsed_ms,
                       total_ms / (run + 1));
            }
        }

        printf("\n=== Benchmark results (%d runs) ===\n", NUM_RUNS);
        printf("  avg : %.2f ms  (%.1f FPS)\n", total_ms / NUM_RUNS,
                                                  1000.0 / (total_ms / NUM_RUNS));
        printf("  min : %.2f ms\n", min_ms);
        printf("  max : %.2f ms\n", max_ms);

        // --- рисуем результат последнего прогона ---
        char text[256];
        for (int i = 0; i < od_results.count; i++) {
            object_detect_result *det = &od_results.results[i];
            printf("%s @ (%d %d %d %d) %.3f\n",
                   coco_cls_to_name(det->cls_id),
                   det->box.left, det->box.top,
                   det->box.right, det->box.bottom,
                   det->prop);
            draw_rectangle(&src_image,
                           det->box.left, det->box.top,
                           det->box.right - det->box.left,
                           det->box.bottom - det->box.top,
                           COLOR_BLUE, 3);
            sprintf(text, "%s %.1f%%",
                    coco_cls_to_name(det->cls_id), det->prop * 100);
            draw_text(&src_image, text,
                      det->box.left, det->box.top - 20,
                      COLOR_RED, 10);
        }
        write_image("out.png", &src_image);

        if (src_image.virt_addr) free(src_image.virt_addr);
    }

out:
    deinit_post_process();
    ret = release_yolov8_model(&rknn_app_ctx);
    if (ret != 0) printf("release_yolov8_model fail! ret=%d\n", ret);

    printf("The end\n");
    return 0;
}