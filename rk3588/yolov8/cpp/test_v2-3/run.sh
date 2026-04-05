#!/usr/bin/env bash

sDir="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# 
cd "$sDir/build"

# ./rknn_yolov8_demo "$sDir/../common/model/yolov8n.rknn" "$sDir/../common/model/bus.jpg"

# [ 100/100] last=21.83 ms  avg=21.37 ms
# === Benchmark results (100 runs) ===
#   avg : 21.37 ms  (46.8 FPS)
#   min : 16.41 ms
#   max : 23.08 ms


./rknn_yolov8_demo_zero_copy "$sDir/../common/model/yolov8n.rknn" "$sDir/../common/model/bus.jpg"

# [ 100/100] last=21.27 ms  avg=22.46 ms

# === Benchmark results (100 runs) ===
#   avg : 22.46 ms  (44.5 FPS)
#   min : 16.02 ms
#   max : 25.11 ms
