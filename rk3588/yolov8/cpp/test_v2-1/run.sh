#!/usr/bin/env bash

sDir="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# 
cd "$sDir/build"

# ./rknn_yolov8_demo "$sDir/../common/model/yolov8n.rknn" "$sDir/../common/model/bus.jpg"
./rknn_yolov8_demo_zero_copy "$sDir/../common/model/yolov8n.rknn" "$sDir/../common/model/bus.jpg"

