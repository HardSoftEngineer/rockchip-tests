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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <chrono> // steady_clock

#include "yolov8.h"
#include "image_utils.h"
#include "file_utils.h"
#include "image_drawing.h"

// Псевдонимы chrono — определяем здесь, чтобы не тащить в заголовки
using clk = std::chrono::steady_clock;
using ms  = std::chrono::duration<double, std::milli>;

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("%s <model_path> <image_path>\n", argv[0]);
        return -1;
    }

    const char *model_path = argv[1];
    const char *image_path = argv[2];
    const int   NUM_RUNS   = 1000;   // количество прогонов для усреднения

    int ret;
    rknn_app_context_t rknn_app_ctx;
    memset(&rknn_app_ctx, 0, sizeof(rknn_app_context_t));

    init_post_process();

    ret = init_yolov8_model(model_path, &rknn_app_ctx);
    if (ret != 0)
    {
        printf("init_yolov8_model fail! ret=%d model_path=%s\n", ret, model_path);
        goto out;
    }

    // Блок {} нужен в C++ чтобы goto не перепрыгивал через инициализацию
    // переменных с конструкторами (chrono, double и т.д.)
    {
        image_buffer_t src_image;
        memset(&src_image, 0, sizeof(image_buffer_t));

        ret = read_image(image_path, &src_image);
        if (ret != 0)
        {
            printf("read image fail! ret=%d image_path=%s\n", ret, image_path);
            goto out;
        }

        object_detect_result_list od_results;

        // --- прогрев: один запуск до замера чтобы NPU кэши прогрелись ---
        {
            infer_timing_t warmup_timing = {0, 0, 0};
            ret = inference_yolov8_model(&rknn_app_ctx, &src_image, &od_results, &warmup_timing);
            if (ret != 0)
            {
                printf("warmup inference fail! ret=%d\n", ret);
                free(src_image.virt_addr);
                goto out;
            }
            printf("Warmup: pre=%.2f  npu=%.2f  post=%.2f ms\n",
                   warmup_timing.pre_ms, warmup_timing.npu_ms, warmup_timing.post_ms);
        }

        // --- накопители ---
        double total_pre  = 0, total_npu  = 0, total_post = 0;
        double min_npu    = 1e9, max_npu  = 0;
        double min_total  = 1e9, max_total = 0;

        for (int run = 0; run < NUM_RUNS; run++)
        {
            infer_timing_t timing = {0, 0, 0};

            auto t_start = clk::now();
            ret = inference_yolov8_model(&rknn_app_ctx, &src_image, &od_results, &timing);
            auto t_end   = clk::now();

            if (ret != 0)
            {
                printf("inference fail at run %d! ret=%d\n", run, ret);
                break;
            }

            double wall_ms = ms(t_end - t_start).count();  // полное время снаружи

            total_pre  += timing.pre_ms;
            total_npu  += timing.npu_ms;
            total_post += timing.post_ms;

            if (timing.npu_ms < min_npu)   min_npu   = timing.npu_ms;
            if (timing.npu_ms > max_npu)   max_npu   = timing.npu_ms;
            if (wall_ms       < min_total) min_total = wall_ms;
            if (wall_ms       > max_total) max_total = wall_ms;

            // прогресс каждые 10 итераций
            if ((run + 1) % 10 == 0)
            {
                printf("  [%4d/%d] pre=%.2f  npu=%.2f  post=%.2f  wall=%.2f ms\n",
                       run + 1, NUM_RUNS,
                       timing.pre_ms, timing.npu_ms, timing.post_ms, wall_ms);
            }
        }

        double avg_pre   = total_pre  / NUM_RUNS;
        double avg_npu   = total_npu  / NUM_RUNS;
        double avg_post  = total_post / NUM_RUNS;
        double avg_total = avg_pre + avg_npu + avg_post;

        printf("\n=== Benchmark results (%d runs) ===\n", NUM_RUNS);
        printf("  pre   avg : %6.2f ms\n", avg_pre);
        printf("  npu   avg : %6.2f ms  (min %.2f  max %.2f)\n", avg_npu, min_npu, max_npu);
        printf("  post  avg : %6.2f ms\n", avg_post);
        printf("  --------------------------------\n");
        printf("  total avg : %6.2f ms  (%.1f FPS)\n", avg_total, 1000.0 / avg_total);
        printf("  wall  min : %6.2f ms  max %.2f ms\n", min_total, max_total);

        // --- рисуем результат последнего прогона ---
        char text[256];
        for (int i = 0; i < od_results.count; i++)
        {
            object_detect_result *det = &od_results.results[i];
            printf("%s @ (%d %d %d %d) %.3f\n",
                   coco_cls_to_name(det->cls_id),
                   det->box.left, det->box.top,
                   det->box.right, det->box.bottom,
                   det->prop);

            draw_rectangle(&src_image,
                           det->box.left, det->box.top,
                           det->box.right  - det->box.left,
                           det->box.bottom - det->box.top,
                           COLOR_BLUE, 3);

            sprintf(text, "%s %.1f%%",
                    coco_cls_to_name(det->cls_id), det->prop * 100);
            draw_text(&src_image, text, det->box.left, det->box.top - 20, COLOR_RED, 10);
        }
        write_image("out.png", &src_image);

        if (src_image.virt_addr != NULL)
            free(src_image.virt_addr);
    }

out:
    deinit_post_process();

    ret = release_yolov8_model(&rknn_app_ctx);
    if (ret != 0)
        printf("release_yolov8_model fail! ret=%d\n", ret);

    printf("The end\n");
    return 0;
}
