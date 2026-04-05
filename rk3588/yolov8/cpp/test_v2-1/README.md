# v2-1 / YOLOv8 C++ Example for RK3588

## Overview

This example demonstrates running YOLOv8 object detection using С/C++ on the RK3588. 
The implementation focuses on native device compilation and execution, eliminating the need for cross-compilation toolchains and simplifying the development workflow on this powerful ARM-based SoC.

## Source Reference

This example is adapted from the [RKNN Model Zoo YOLOv8 C++ example](https://github.com/airockchip/rknn_model_zoo/tree/main/examples/yolov8/cpp).

## Key Features

- **Native Compilation**: Build and run directly on RK3588 devices without cross-compilation
- **Minimal Dependencies**: Includes only essential libraries and headers in the `common/` directory
- **Optimized for RK3588**: Leverages the NPU capabilities of Rockchip's RK3588 chip
- **Streamlined Resources**: Removed unnecessary assets not required for the selected examples
