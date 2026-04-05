#!/usr/bin/env bash

sDir="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

BUILD_TYPE=Release
DEMO_NAME=yolov5

# 
cd "$sDir"
mkdir -p build 
cd "$sDir/build"

# 
cmake .. \
    -DCMAKE_BUILD_TYPE=${BUILD_TYPE} \
    -DLIBRKNNRT=$sDir/../common/3rdparty/rknpu2/Linux/aarch64/librknnrt.so \
    -DLIBRKNNRT_INCLUDES=$sDir/../common/3rdparty/rknpu2/include \
    -DCMAKE_INSTALL_PREFIX=./install

make -j$(nproc)

# make install
