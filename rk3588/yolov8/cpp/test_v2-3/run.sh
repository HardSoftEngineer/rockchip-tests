#!/usr/bin/env bash

sDir="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# 
cd "$sDir/build"


# ./rknn_yolov8_demo "$sDir/../common/model/yolov8n.rknn" "$sDir/../common/model/bus.jpg"

# Warmup: pre=4.88  npu=17.44  post=0.30 ms
#   [  10/100] pre=2.14  npu=20.14  post=0.97  wall=23.25 ms
#   [  20/100] pre=2.09  npu=19.79  post=0.94  wall=22.82 ms
#   [  30/100] pre=2.11  npu=20.72  post=1.00  wall=23.84 ms
#   [  40/100] pre=2.08  npu=18.93  post=0.98  wall=21.99 ms
#   [  50/100] pre=2.02  npu=19.12  post=0.99  wall=22.13 ms
#   [  60/100] pre=2.12  npu=17.56  post=0.99  wall=20.66 ms
#   [  70/100] pre=2.08  npu=18.17  post=0.95  wall=21.20 ms
#   [  80/100] pre=2.37  npu=17.29  post=1.27  wall=20.94 ms
#   [  90/100] pre=2.08  npu=20.46  post=1.09  wall=23.64 ms
#   [ 100/100] pre=2.11  npu=20.78  post=0.98  wall=23.87 ms

# === Benchmark results (100 runs) ===
#   pre   avg :   2.11 ms
#   npu   avg :  19.07 ms  (min 16.59  max 21.78)
#   post  avg :   1.03 ms
#   --------------------------------
#   total avg :  22.22 ms  (45.0 FPS)
#   wall  min :  18.85 ms  max 24.86 ms

# 

# ./rknn_yolov8_demo_zero_copy "$sDir/../common/model/yolov8n.rknn" "$sDir/../common/model/bus.jpg"

# Warmup: pre=1.10  npu=15.90  post=1.35 ms
#   [  10/100] pre=1.19  npu=18.98  post=3.42  wall=23.59 ms
#   [  20/100] pre=1.15  npu=19.43  post=3.44  wall=24.02 ms
#   [  30/100] pre=1.28  npu=16.15  post=3.73  wall=21.15 ms
#   [  40/100] pre=1.19  npu=19.63  post=3.40  wall=24.22 ms
#   [  50/100] pre=1.20  npu=18.21  post=3.47  wall=22.88 ms
#   [  60/100] pre=1.18  npu=17.09  post=3.41  wall=21.68 ms
#   [  70/100] pre=1.17  npu=17.30  post=3.43  wall=21.90 ms
#   [  80/100] pre=1.22  npu=17.32  post=3.56  wall=22.09 ms
#   [  90/100] pre=1.23  npu=16.39  post=3.63  wall=21.26 ms
#   [ 100/100] pre=1.20  npu=17.42  post=3.40  wall=22.02 ms

# === Benchmark results (100 runs) ===
#   pre   avg :   1.21 ms
#   npu   avg :  17.68 ms  (min 15.45  max 20.26)
#   post  avg :   3.52 ms
#   --------------------------------
#   total avg :  22.41 ms  (44.6 FPS)
#   wall  min :  18.37 ms  max 25.66 ms

# -----------------------------------------------------------------------------

# ./rknn_yolov8_demo "$sDir/../common/model/yolov8n.rknn" "$sDir/../common/model/bus.jpg"

# === Benchmark results (1000 runs) ===
#   pre   avg :   2.22 ms
#   npu   avg :  18.99 ms  (min 14.85  max 26.35)
#   post  avg :   1.01 ms
#   --------------------------------
#   total avg :  22.22 ms  (45.0 FPS)
#   wall  min :  17.55 ms  max 29.79 ms

# taskset -c 4-5 ./rknn_yolov8_demo "$sDir/../common/model/yolov8n.rknn" "$sDir/../common/model/bus.jpg"

# === Benchmark results (1000 runs) ===
#   pre   avg :   1.30 ms
#   npu   avg :  15.14 ms  (min 14.59  max 17.73)
#   post  avg :   0.26 ms
#   --------------------------------
#   total avg :  16.70 ms  (59.9 FPS)
#   wall  min :  16.11 ms  max 19.31 ms

# 

# ./rknn_yolov8_demo_zero_copy "$sDir/../common/model/yolov8n.rknn" "$sDir/../common/model/bus.jpg"

# === Benchmark results (1000 runs) ===
#   pre   avg :   1.18 ms
#   npu   avg :  17.60 ms  (min 14.28  max 21.30)
#   post  avg :   3.45 ms
#   --------------------------------
#   total avg :  22.23 ms  (45.0 FPS)
#   wall  min :  15.99 ms  max 27.44 ms

taskset -c 4-5 ./rknn_yolov8_demo_zero_copy "$sDir/../common/model/yolov8n.rknn" "$sDir/../common/model/bus.jpg"
