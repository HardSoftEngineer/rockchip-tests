# y8tests



```
./rknn_yolov8_demo "$sDir/../common/model/yolov8n.rknn" "$sDir/../common/model/bus.jpg"


jetson@0000100000055:~/dev/cpp/y8tests$ ./v2-3/run.sh 
load lable ../../common/model/coco_80_labels_list.txt
model input num: 1, output num: 9
input tensors:
  index=0, name=images, n_dims=4, dims=[1, 640, 640, 3], n_elems=1228800, size=1228800, fmt=NHWC, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003922
output tensors:
  index=0, name=318, n_dims=4, dims=[1, 64, 80, 80], n_elems=409600, size=409600, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-58, scale=0.117659
  index=1, name=onnx::ReduceSum_326, n_dims=4, dims=[1, 80, 80, 80], n_elems=512000, size=512000, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003104
  index=2, name=331, n_dims=4, dims=[1, 1, 80, 80], n_elems=6400, size=6400, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003173
  index=3, name=338, n_dims=4, dims=[1, 64, 40, 40], n_elems=102400, size=102400, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-45, scale=0.093747
  index=4, name=onnx::ReduceSum_346, n_dims=4, dims=[1, 80, 40, 40], n_elems=128000, size=128000, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003594
  index=5, name=350, n_dims=4, dims=[1, 1, 40, 40], n_elems=1600, size=1600, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003627
  index=6, name=357, n_dims=4, dims=[1, 64, 20, 20], n_elems=25600, size=25600, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-34, scale=0.083036
  index=7, name=onnx::ReduceSum_365, n_dims=4, dims=[1, 80, 20, 20], n_elems=32000, size=32000, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003874
  index=8, name=369, n_dims=4, dims=[1, 1, 20, 20], n_elems=400, size=400, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003922
model is NHWC input fmt
model input height=640, width=640, channel=3
origin size=640x640 crop size=640x640
input image: 640 x 640, subsampling: 4:2:0, colorspace: YCbCr, orientation: 1
rga_api version 1.10.1_[0]
Warmup: pre=4.73  npu=17.15  post=0.30 ms
  [  10/1000] pre=2.13  npu=20.69  post=0.95  wall=23.77 ms
  [  20/1000] pre=2.20  npu=19.34  post=0.94  wall=22.48 ms
  [  30/1000] pre=2.17  npu=17.81  post=0.96  wall=20.94 ms
  [  40/1000] pre=2.18  npu=17.83  post=0.95  wall=20.96 ms
  [  50/1000] pre=2.17  npu=19.90  post=0.94  wall=23.01 ms
  [  60/1000] pre=2.12  npu=19.41  post=0.97  wall=22.51 ms
  [  70/1000] pre=2.12  npu=17.94  post=0.97  wall=21.03 ms
  [  80/1000] pre=2.14  npu=18.64  post=0.97  wall=21.75 ms
  [  90/1000] pre=2.13  npu=18.30  post=0.98  wall=21.41 ms
  [ 100/1000] pre=2.13  npu=18.34  post=0.94  wall=21.40 ms
  [ 110/1000] pre=2.15  npu=18.96  post=1.26  wall=22.37 ms
  [ 120/1000] pre=2.21  npu=18.76  post=0.98  wall=21.95 ms
  [ 130/1000] pre=2.19  npu=18.25  post=0.97  wall=21.41 ms
  [ 140/1000] pre=2.12  npu=19.52  post=0.96  wall=22.60 ms
  [ 150/1000] pre=2.16  npu=18.40  post=0.96  wall=21.53 ms
  [ 160/1000] pre=2.24  npu=17.17  post=0.98  wall=20.39 ms
  [ 170/1000] pre=2.12  npu=18.18  post=0.95  wall=21.25 ms
  [ 180/1000] pre=2.22  npu=17.59  post=0.95  wall=20.76 ms
  [ 190/1000] pre=2.25  npu=19.33  post=0.99  wall=22.57 ms
  [ 200/1000] pre=2.25  npu=20.45  post=0.98  wall=23.68 ms
  [ 210/1000] pre=2.21  npu=20.62  post=1.00  wall=23.82 ms
  [ 220/1000] pre=2.22  npu=21.15  post=1.00  wall=24.37 ms
  [ 230/1000] pre=2.48  npu=14.85  post=0.27  wall=17.61 ms
  [ 240/1000] pre=2.16  npu=19.74  post=0.94  wall=22.84 ms
  [ 250/1000] pre=2.78  npu=17.35  post=1.26  wall=21.38 ms
  [ 260/1000] pre=2.21  npu=19.11  post=0.95  wall=22.27 ms
  [ 270/1000] pre=2.23  npu=17.65  post=0.96  wall=20.85 ms
  [ 280/1000] pre=2.21  npu=20.02  post=0.95  wall=23.18 ms
  [ 290/1000] pre=2.19  npu=19.09  post=1.01  wall=22.30 ms
  [ 300/1000] pre=2.18  npu=18.54  post=0.99  wall=21.71 ms
  [ 310/1000] pre=2.18  npu=19.80  post=1.04  wall=23.03 ms
  [ 320/1000] pre=2.20  npu=17.27  post=1.01  wall=20.49 ms
  [ 330/1000] pre=2.25  npu=17.85  post=0.98  wall=21.09 ms
  [ 340/1000] pre=2.19  npu=16.89  post=1.01  wall=20.09 ms
  [ 350/1000] pre=2.13  npu=17.48  post=0.96  wall=20.57 ms
  [ 360/1000] pre=2.32  npu=17.71  post=1.33  wall=21.37 ms
  [ 370/1000] pre=2.48  npu=18.68  post=1.04  wall=22.20 ms
  [ 380/1000] pre=2.16  npu=18.68  post=0.95  wall=21.78 ms
  [ 390/1000] pre=2.54  npu=19.86  post=1.40  wall=23.79 ms
  [ 400/1000] pre=2.16  npu=19.03  post=0.94  wall=22.14 ms
  [ 410/1000] pre=2.18  npu=18.73  post=0.94  wall=21.85 ms
  [ 420/1000] pre=2.17  npu=18.22  post=0.94  wall=21.32 ms
  [ 430/1000] pre=2.19  npu=17.68  post=0.93  wall=20.80 ms
  [ 440/1000] pre=2.22  npu=17.93  post=0.95  wall=21.10 ms
  [ 450/1000] pre=2.14  npu=18.94  post=0.96  wall=22.04 ms
  [ 460/1000] pre=2.42  npu=16.91  post=1.08  wall=20.41 ms
  [ 470/1000] pre=2.19  npu=20.10  post=0.94  wall=23.23 ms
  [ 480/1000] pre=2.34  npu=19.13  post=1.13  wall=22.59 ms
  [ 490/1000] pre=2.20  npu=18.94  post=0.97  wall=22.11 ms
  [ 500/1000] pre=2.20  npu=18.71  post=0.94  wall=21.85 ms
  [ 510/1000] pre=2.24  npu=18.45  post=0.97  wall=21.66 ms
  [ 520/1000] pre=2.23  npu=18.86  post=0.94  wall=22.03 ms
  [ 530/1000] pre=2.14  npu=17.59  post=0.95  wall=20.68 ms
  [ 540/1000] pre=2.19  npu=18.44  post=0.94  wall=21.57 ms
  [ 550/1000] pre=2.15  npu=18.08  post=0.94  wall=21.17 ms
  [ 560/1000] pre=2.19  npu=20.77  post=0.94  wall=23.90 ms
  [ 570/1000] pre=2.17  npu=19.95  post=1.13  wall=23.26 ms
  [ 580/1000] pre=2.18  npu=17.96  post=1.10  wall=21.24 ms
  [ 590/1000] pre=2.18  npu=18.34  post=0.94  wall=21.46 ms
  [ 600/1000] pre=2.19  npu=20.33  post=0.94  wall=23.46 ms
  [ 610/1000] pre=2.18  npu=20.58  post=0.96  wall=23.73 ms
  [ 620/1000] pre=2.17  npu=20.76  post=0.95  wall=23.88 ms
  [ 630/1000] pre=2.18  npu=19.04  post=0.94  wall=22.17 ms
  [ 640/1000] pre=2.20  npu=20.39  post=0.95  wall=23.55 ms
  [ 650/1000] pre=2.19  npu=20.74  post=0.96  wall=23.89 ms
  [ 660/1000] pre=2.28  npu=18.54  post=1.06  wall=21.87 ms
  [ 670/1000] pre=2.21  npu=16.91  post=1.07  wall=20.19 ms
  [ 680/1000] pre=2.55  npu=16.95  post=1.24  wall=20.74 ms
  [ 690/1000] pre=2.16  npu=18.55  post=0.94  wall=21.65 ms
  [ 700/1000] pre=2.21  npu=19.08  post=0.94  wall=22.23 ms
  [ 710/1000] pre=2.20  npu=18.51  post=0.97  wall=21.69 ms
  [ 720/1000] pre=2.21  npu=19.71  post=0.94  wall=22.86 ms
  [ 730/1000] pre=2.20  npu=16.89  post=1.03  wall=20.12 ms
  [ 740/1000] pre=2.20  npu=20.56  post=0.94  wall=23.69 ms
  [ 750/1000] pre=2.30  npu=20.19  post=1.12  wall=23.62 ms
  [ 760/1000] pre=2.41  npu=18.19  post=1.25  wall=21.87 ms
  [ 770/1000] pre=2.18  npu=20.28  post=0.97  wall=23.42 ms
  [ 780/1000] pre=2.18  npu=20.78  post=0.95  wall=23.91 ms
  [ 790/1000] pre=2.20  npu=20.78  post=0.96  wall=23.94 ms
  [ 800/1000] pre=2.18  npu=20.09  post=0.97  wall=23.24 ms
  [ 810/1000] pre=2.18  npu=17.66  post=0.94  wall=20.78 ms
  [ 820/1000] pre=2.19  npu=18.61  post=0.95  wall=21.75 ms
  [ 830/1000] pre=2.21  npu=20.67  post=0.99  wall=23.87 ms
  [ 840/1000] pre=2.20  npu=19.72  post=0.99  wall=22.91 ms
  [ 850/1000] pre=2.50  npu=17.71  post=1.29  wall=21.49 ms
  [ 860/1000] pre=2.36  npu=19.94  post=1.00  wall=23.31 ms
  [ 870/1000] pre=2.17  npu=19.30  post=0.95  wall=22.42 ms
  [ 880/1000] pre=2.18  npu=20.75  post=0.97  wall=23.91 ms
  [ 890/1000] pre=2.17  npu=20.82  post=1.00  wall=23.99 ms
  [ 900/1000] pre=2.48  npu=17.14  post=1.27  wall=20.90 ms
  [ 910/1000] pre=2.18  npu=18.25  post=0.96  wall=21.39 ms
  [ 920/1000] pre=2.20  npu=18.98  post=0.96  wall=22.14 ms
  [ 930/1000] pre=2.25  npu=19.18  post=1.00  wall=22.44 ms
  [ 940/1000] pre=2.18  npu=18.96  post=1.09  wall=22.22 ms
  [ 950/1000] pre=2.31  npu=17.11  post=1.10  wall=20.52 ms
  [ 960/1000] pre=2.20  npu=20.99  post=0.97  wall=24.16 ms
  [ 970/1000] pre=2.19  npu=20.88  post=0.95  wall=24.02 ms
  [ 980/1000] pre=2.15  npu=20.85  post=0.97  wall=23.97 ms
  [ 990/1000] pre=2.18  npu=17.58  post=1.05  wall=20.82 ms
  [1000/1000] pre=2.19  npu=17.49  post=1.08  wall=20.77 ms

=== Benchmark results (1000 runs) ===
  pre   avg :   2.22 ms
  npu   avg :  18.99 ms  (min 14.85  max 26.35)
  post  avg :   1.01 ms
  --------------------------------
  total avg :  22.22 ms  (45.0 FPS)
  wall  min :  17.55 ms  max 29.79 ms
person @ (211 241 282 506) 0.864
bus @ (96 136 549 449) 0.864
person @ (109 235 225 535) 0.860
person @ (477 226 560 522) 0.848
person @ (79 327 116 513) 0.306
write_image path: out.png width=640 height=640 channel=3 data=0x5581d6d150
The end

```


```


taskset -c 4-5 ./rknn_yolov8_demo "$sDir/../common/model/yolov8n.rknn" "$sDir/../common/model/bus.jpg"

jetson@0000100000055:~/dev/cpp/y8tests$ ./v2-3/run.sh 
load lable ../../common/model/coco_80_labels_list.txt
model input num: 1, output num: 9
input tensors:
  index=0, name=images, n_dims=4, dims=[1, 640, 640, 3], n_elems=1228800, size=1228800, fmt=NHWC, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003922
output tensors:
  index=0, name=318, n_dims=4, dims=[1, 64, 80, 80], n_elems=409600, size=409600, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-58, scale=0.117659
  index=1, name=onnx::ReduceSum_326, n_dims=4, dims=[1, 80, 80, 80], n_elems=512000, size=512000, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003104
  index=2, name=331, n_dims=4, dims=[1, 1, 80, 80], n_elems=6400, size=6400, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003173
  index=3, name=338, n_dims=4, dims=[1, 64, 40, 40], n_elems=102400, size=102400, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-45, scale=0.093747
  index=4, name=onnx::ReduceSum_346, n_dims=4, dims=[1, 80, 40, 40], n_elems=128000, size=128000, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003594
  index=5, name=350, n_dims=4, dims=[1, 1, 40, 40], n_elems=1600, size=1600, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003627
  index=6, name=357, n_dims=4, dims=[1, 64, 20, 20], n_elems=25600, size=25600, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-34, scale=0.083036
  index=7, name=onnx::ReduceSum_365, n_dims=4, dims=[1, 80, 20, 20], n_elems=32000, size=32000, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003874
  index=8, name=369, n_dims=4, dims=[1, 1, 20, 20], n_elems=400, size=400, fmt=NCHW, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003922
model is NHWC input fmt
model input height=640, width=640, channel=3
origin size=640x640 crop size=640x640
input image: 640 x 640, subsampling: 4:2:0, colorspace: YCbCr, orientation: 1
rga_api version 1.10.1_[0]
Warmup: pre=4.68  npu=15.37  post=0.28 ms
  [  10/1000] pre=1.27  npu=15.42  post=0.26  wall=16.95 ms
  [  20/1000] pre=1.27  npu=14.62  post=0.26  wall=16.16 ms
  [  30/1000] pre=1.31  npu=14.64  post=0.26  wall=16.20 ms
  [  40/1000] pre=1.27  npu=14.79  post=0.26  wall=16.32 ms
  [  50/1000] pre=1.25  npu=16.14  post=0.26  wall=17.65 ms
  [  60/1000] pre=1.38  npu=14.80  post=0.26  wall=16.45 ms
  [  70/1000] pre=1.26  npu=14.86  post=0.26  wall=16.38 ms
  [  80/1000] pre=1.25  npu=15.12  post=0.26  wall=16.63 ms
  [  90/1000] pre=1.27  npu=14.88  post=0.26  wall=16.41 ms
  [ 100/1000] pre=1.29  npu=14.89  post=0.26  wall=16.44 ms
  [ 110/1000] pre=1.27  npu=15.11  post=0.26  wall=16.63 ms
  [ 120/1000] pre=1.26  npu=15.10  post=0.25  wall=16.61 ms
  [ 130/1000] pre=1.31  npu=14.84  post=0.26  wall=16.41 ms
  [ 140/1000] pre=1.25  npu=14.85  post=0.26  wall=16.35 ms
  [ 150/1000] pre=1.26  npu=14.98  post=0.26  wall=16.49 ms
  [ 160/1000] pre=1.30  npu=14.64  post=0.26  wall=16.20 ms
  [ 170/1000] pre=1.28  npu=14.63  post=0.26  wall=16.16 ms
  [ 180/1000] pre=1.25  npu=15.02  post=0.26  wall=16.53 ms
  [ 190/1000] pre=1.41  npu=14.75  post=0.26  wall=16.42 ms
  [ 200/1000] pre=1.25  npu=14.92  post=0.26  wall=16.43 ms
  [ 210/1000] pre=1.26  npu=14.80  post=0.26  wall=16.32 ms
  [ 220/1000] pre=1.27  npu=14.60  post=0.26  wall=16.13 ms
  [ 230/1000] pre=1.35  npu=14.76  post=0.27  wall=16.37 ms
  [ 240/1000] pre=1.27  npu=14.94  post=0.26  wall=16.46 ms
  [ 250/1000] pre=1.29  npu=16.55  post=0.26  wall=18.11 ms
  [ 260/1000] pre=1.26  npu=14.98  post=0.26  wall=16.50 ms
  [ 270/1000] pre=1.30  npu=15.01  post=0.26  wall=16.57 ms
  [ 280/1000] pre=1.27  npu=15.05  post=0.26  wall=16.58 ms
  [ 290/1000] pre=1.30  npu=14.75  post=0.26  wall=16.31 ms
  [ 300/1000] pre=1.28  npu=14.84  post=0.26  wall=16.38 ms
  [ 310/1000] pre=1.30  npu=14.85  post=0.26  wall=16.41 ms
  [ 320/1000] pre=1.27  npu=14.97  post=0.26  wall=16.50 ms
  [ 330/1000] pre=1.26  npu=15.64  post=0.26  wall=17.16 ms
  [ 340/1000] pre=1.28  npu=14.79  post=0.26  wall=16.33 ms
  [ 350/1000] pre=1.26  npu=14.89  post=0.27  wall=16.41 ms
  [ 360/1000] pre=1.32  npu=14.99  post=0.26  wall=16.57 ms
  [ 370/1000] pre=1.29  npu=14.95  post=0.26  wall=16.50 ms
  [ 380/1000] pre=1.26  npu=14.95  post=0.26  wall=16.46 ms
  [ 390/1000] pre=1.27  npu=14.85  post=0.26  wall=16.38 ms
  [ 400/1000] pre=1.27  npu=14.66  post=0.26  wall=16.18 ms
  [ 410/1000] pre=1.32  npu=14.99  post=0.26  wall=16.57 ms
  [ 420/1000] pre=1.27  npu=16.19  post=0.26  wall=17.72 ms
  [ 430/1000] pre=1.25  npu=14.93  post=0.26  wall=16.44 ms
  [ 440/1000] pre=1.32  npu=14.78  post=0.26  wall=16.36 ms
  [ 450/1000] pre=1.25  npu=14.97  post=0.26  wall=16.49 ms
  [ 460/1000] pre=1.25  npu=14.82  post=0.26  wall=16.33 ms
  [ 470/1000] pre=1.36  npu=14.69  post=0.26  wall=16.31 ms
  [ 480/1000] pre=1.33  npu=14.83  post=0.26  wall=16.42 ms
  [ 490/1000] pre=1.26  npu=14.64  post=0.26  wall=16.16 ms
  [ 500/1000] pre=1.37  npu=14.78  post=0.27  wall=16.42 ms
  [ 510/1000] pre=1.26  npu=14.78  post=0.26  wall=16.29 ms
  [ 520/1000] pre=1.27  npu=14.96  post=0.26  wall=16.49 ms
  [ 530/1000] pre=1.27  npu=15.02  post=0.26  wall=16.55 ms
  [ 540/1000] pre=1.25  npu=14.88  post=0.26  wall=16.39 ms
  [ 550/1000] pre=1.29  npu=14.63  post=0.26  wall=16.17 ms
  [ 560/1000] pre=1.30  npu=14.97  post=0.27  wall=16.53 ms
  [ 570/1000] pre=1.27  npu=14.61  post=0.26  wall=16.14 ms
  [ 580/1000] pre=1.26  npu=14.68  post=0.26  wall=16.20 ms
  [ 590/1000] pre=1.26  npu=14.93  post=0.26  wall=16.45 ms
  [ 600/1000] pre=1.27  npu=15.12  post=0.26  wall=16.65 ms
  [ 610/1000] pre=1.27  npu=15.24  post=0.26  wall=16.77 ms
  [ 620/1000] pre=1.25  npu=14.60  post=0.26  wall=16.11 ms
  [ 630/1000] pre=1.26  npu=14.80  post=0.26  wall=16.32 ms
  [ 640/1000] pre=1.26  npu=14.97  post=0.26  wall=16.49 ms
  [ 650/1000] pre=1.25  npu=14.98  post=0.26  wall=16.49 ms
  [ 660/1000] pre=1.25  npu=14.84  post=0.26  wall=16.35 ms
  [ 670/1000] pre=1.27  npu=14.98  post=0.26  wall=16.50 ms
  [ 680/1000] pre=1.29  npu=14.59  post=0.26  wall=16.14 ms
  [ 690/1000] pre=1.28  npu=14.94  post=0.26  wall=16.48 ms
  [ 700/1000] pre=1.26  npu=14.90  post=0.26  wall=16.42 ms
  [ 710/1000] pre=1.32  npu=16.92  post=0.26  wall=18.50 ms
  [ 720/1000] pre=1.29  npu=14.80  post=0.26  wall=16.35 ms
  [ 730/1000] pre=1.27  npu=14.84  post=0.26  wall=16.37 ms
  [ 740/1000] pre=1.28  npu=14.61  post=0.26  wall=16.15 ms
  [ 750/1000] pre=1.43  npu=14.87  post=0.27  wall=16.57 ms
  [ 760/1000] pre=1.37  npu=14.85  post=0.27  wall=16.49 ms
  [ 770/1000] pre=1.43  npu=14.94  post=0.27  wall=16.64 ms
  [ 780/1000] pre=1.34  npu=14.82  post=0.28  wall=16.44 ms
  [ 790/1000] pre=1.28  npu=15.06  post=0.29  wall=16.62 ms
  [ 800/1000] pre=1.32  npu=16.92  post=0.26  wall=18.49 ms
  [ 810/1000] pre=1.39  npu=14.77  post=0.27  wall=16.43 ms
  [ 820/1000] pre=1.30  npu=15.36  post=0.27  wall=16.93 ms
  [ 830/1000] pre=1.28  npu=14.85  post=0.27  wall=16.39 ms
  [ 840/1000] pre=1.31  npu=15.77  post=0.26  wall=17.35 ms
  [ 850/1000] pre=1.32  npu=16.85  post=0.26  wall=18.42 ms
  [ 860/1000] pre=1.26  npu=16.64  post=0.26  wall=18.16 ms
  [ 870/1000] pre=1.26  npu=16.92  post=0.26  wall=18.44 ms
  [ 880/1000] pre=1.31  npu=15.00  post=0.26  wall=16.57 ms
  [ 890/1000] pre=1.32  npu=15.40  post=0.26  wall=16.97 ms
  [ 900/1000] pre=1.32  npu=16.92  post=0.26  wall=18.50 ms
  [ 910/1000] pre=1.31  npu=16.92  post=0.26  wall=18.48 ms
  [ 920/1000] pre=1.31  npu=15.01  post=0.26  wall=16.58 ms
  [ 930/1000] pre=1.26  npu=15.02  post=0.26  wall=16.54 ms
  [ 940/1000] pre=1.28  npu=14.77  post=0.26  wall=16.31 ms
  [ 950/1000] pre=1.28  npu=15.02  post=0.26  wall=16.56 ms
  [ 960/1000] pre=1.29  npu=15.04  post=0.26  wall=16.60 ms
  [ 970/1000] pre=1.26  npu=14.93  post=0.27  wall=16.46 ms
  [ 980/1000] pre=1.27  npu=14.94  post=0.26  wall=16.46 ms
  [ 990/1000] pre=1.28  npu=15.00  post=0.26  wall=16.54 ms
  [1000/1000] pre=1.34  npu=14.77  post=0.26  wall=16.37 ms

=== Benchmark results (1000 runs) ===
  pre   avg :   1.30 ms
  npu   avg :  15.14 ms  (min 14.59  max 17.73)
  post  avg :   0.26 ms
  --------------------------------
  total avg :  16.70 ms  (59.9 FPS)
  wall  min :  16.11 ms  max 19.31 ms
person @ (211 241 282 506) 0.864
bus @ (96 136 549 449) 0.864
person @ (109 235 225 535) 0.860
person @ (477 226 560 522) 0.848
person @ (79 327 116 513) 0.306
write_image path: out.png width=640 height=640 channel=3 data=0x5586964150
The end


```




```
./rknn_yolov8_demo_zero_copy "$sDir/../common/model/yolov8n.rknn" "$sDir/../common/model/bus.jpg"



jetson@0000100000055:~/dev/cpp/y8tests$ ./v2-3/run.sh 
load lable ../../common/model/coco_80_labels_list.txt
model input num: 1, output num: 9
input tensors (native):
  index=0, name=images, n_dims=4, dims=[1, 640, 640, 3], n_elems=1228800, size=1228800, w_stride=640, size_with_stride=1228800, fmt=NHWC, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003922
output tensors (native):
  index=0, name=318, n_dims=5, dims=[1, 4, 80, 80, 16], n_elems=409600, size=409600, w_stride=0, size_with_stride=409600, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-58, scale=0.117659
  index=1, name=onnx::ReduceSum_326, n_dims=5, dims=[1, 6, 80, 80, 16], n_elems=614400, size=614400, w_stride=0, size_with_stride=614400, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003104
  index=2, name=331, n_dims=5, dims=[1, 2, 80, 80, 16], n_elems=204800, size=204800, w_stride=0, size_with_stride=204800, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003173
  index=3, name=338, n_dims=5, dims=[1, 4, 40, 40, 16], n_elems=102400, size=102400, w_stride=0, size_with_stride=102400, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-45, scale=0.093747
  index=4, name=onnx::ReduceSum_346, n_dims=5, dims=[1, 6, 40, 40, 16], n_elems=153600, size=153600, w_stride=0, size_with_stride=153600, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003594
  index=5, name=350, n_dims=5, dims=[1, 2, 40, 40, 16], n_elems=51200, size=51200, w_stride=0, size_with_stride=51200, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003627
  index=6, name=357, n_dims=5, dims=[1, 4, 20, 20, 16], n_elems=25600, size=25600, w_stride=0, size_with_stride=25600, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-34, scale=0.083036
  index=7, name=onnx::ReduceSum_365, n_dims=5, dims=[1, 6, 20, 20, 16], n_elems=38400, size=38400, w_stride=0, size_with_stride=38400, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003874
  index=8, name=369, n_dims=5, dims=[1, 2, 20, 20, 16], n_elems=12800, size=12800, w_stride=0, size_with_stride=12800, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003922
model is NHWC input fmt
model input height=640, width=640, channel=3
origin size=640x640 crop size=640x640
input image: 640 x 640, subsampling: 4:2:0, colorspace: YCbCr, orientation: 1
rga_api version 1.10.1_[0]
Warmup: pre=1.02  npu=14.76  post=1.33 ms
  [  10/1000] pre=1.12  npu=17.28  post=3.39  wall=21.79 ms
  [  20/1000] pre=1.11  npu=17.23  post=3.43  wall=21.76 ms
  [  30/1000] pre=1.14  npu=17.52  post=3.40  wall=22.06 ms
  [  40/1000] pre=1.14  npu=16.05  post=3.53  wall=20.73 ms
  [  50/1000] pre=1.14  npu=15.69  post=3.46  wall=20.29 ms
  [  60/1000] pre=1.10  npu=17.43  post=3.40  wall=21.94 ms
  [  70/1000] pre=1.16  npu=17.60  post=3.40  wall=22.16 ms
  [  80/1000] pre=1.16  npu=17.26  post=3.40  wall=21.81 ms
  [  90/1000] pre=1.13  npu=17.95  post=3.40  wall=22.48 ms
  [ 100/1000] pre=1.17  npu=17.51  post=3.43  wall=22.11 ms
  [ 110/1000] pre=1.15  npu=15.64  post=3.41  wall=20.20 ms
  [ 120/1000] pre=1.13  npu=18.67  post=3.43  wall=23.23 ms
  [ 130/1000] pre=1.16  npu=16.13  post=3.41  wall=20.71 ms
  [ 140/1000] pre=1.19  npu=15.53  post=3.40  wall=20.12 ms
  [ 150/1000] pre=1.14  npu=18.49  post=3.38  wall=23.01 ms
  [ 160/1000] pre=1.17  npu=17.41  post=3.72  wall=22.30 ms
  [ 170/1000] pre=1.17  npu=19.39  post=3.43  wall=23.99 ms
  [ 180/1000] pre=1.26  npu=15.62  post=3.82  wall=20.71 ms
  [ 190/1000] pre=1.15  npu=18.85  post=3.42  wall=23.43 ms
  [ 200/1000] pre=1.17  npu=17.16  post=3.41  wall=21.74 ms
  [ 210/1000] pre=1.18  npu=15.68  post=3.50  wall=20.36 ms
  [ 220/1000] pre=1.16  npu=16.73  post=3.41  wall=21.30 ms
  [ 230/1000] pre=1.17  npu=16.59  post=3.49  wall=21.24 ms
  [ 240/1000] pre=1.27  npu=18.42  post=3.51  wall=23.20 ms
  [ 250/1000] pre=1.15  npu=19.03  post=3.41  wall=23.59 ms
  [ 260/1000] pre=1.17  npu=18.71  post=3.39  wall=23.27 ms
  [ 270/1000] pre=1.20  npu=19.52  post=3.46  wall=24.18 ms
  [ 280/1000] pre=1.18  npu=19.58  post=3.42  wall=24.18 ms
  [ 290/1000] pre=1.16  npu=18.13  post=3.39  wall=22.68 ms
  [ 300/1000] pre=1.14  npu=16.76  post=3.38  wall=21.27 ms
  [ 310/1000] pre=1.20  npu=17.97  post=3.39  wall=22.57 ms
  [ 320/1000] pre=1.15  npu=18.90  post=3.51  wall=23.57 ms
  [ 330/1000] pre=1.17  npu=19.74  post=3.40  wall=24.31 ms
  [ 340/1000] pre=1.17  npu=18.10  post=3.39  wall=22.67 ms
  [ 350/1000] pre=1.15  npu=18.88  post=3.37  wall=23.41 ms
  [ 360/1000] pre=1.15  npu=17.02  post=3.42  wall=21.58 ms
  [ 370/1000] pre=1.23  npu=14.95  post=3.67  wall=19.86 ms
  [ 380/1000] pre=1.23  npu=17.89  post=3.42  wall=22.54 ms
  [ 390/1000] pre=1.14  npu=15.32  post=3.48  wall=19.94 ms
  [ 400/1000] pre=1.16  npu=17.59  post=3.40  wall=22.15 ms
  [ 410/1000] pre=1.19  npu=16.06  post=3.65  wall=20.91 ms
  [ 420/1000] pre=1.17  npu=18.03  post=3.43  wall=22.63 ms
  [ 430/1000] pre=1.17  npu=15.75  post=3.40  wall=20.32 ms
  [ 440/1000] pre=1.13  npu=17.42  post=3.39  wall=21.95 ms
  [ 450/1000] pre=1.16  npu=17.11  post=3.39  wall=21.67 ms
  [ 460/1000] pre=1.21  npu=15.81  post=3.59  wall=20.61 ms
  [ 470/1000] pre=1.16  npu=18.53  post=3.40  wall=23.09 ms
  [ 480/1000] pre=1.13  npu=17.55  post=3.39  wall=22.07 ms
  [ 490/1000] pre=1.17  npu=17.87  post=3.38  wall=22.41 ms
  [ 500/1000] pre=1.23  npu=16.55  post=3.55  wall=21.33 ms
  [ 510/1000] pre=1.14  npu=15.48  post=3.49  wall=20.11 ms
  [ 520/1000] pre=1.18  npu=18.01  post=3.41  wall=22.60 ms
  [ 530/1000] pre=1.16  npu=17.42  post=3.41  wall=21.99 ms
  [ 540/1000] pre=1.15  npu=17.80  post=3.41  wall=22.36 ms
  [ 550/1000] pre=1.18  npu=16.83  post=3.81  wall=21.82 ms
  [ 560/1000] pre=1.14  npu=19.66  post=3.46  wall=24.27 ms
  [ 570/1000] pre=1.12  npu=18.20  post=3.47  wall=22.79 ms
  [ 580/1000] pre=1.16  npu=18.72  post=3.43  wall=23.31 ms
  [ 590/1000] pre=1.18  npu=19.22  post=3.55  wall=23.96 ms
  [ 600/1000] pre=1.13  npu=19.15  post=3.43  wall=23.72 ms
  [ 610/1000] pre=1.40  npu=17.89  post=4.06  wall=23.35 ms
  [ 620/1000] pre=1.19  npu=19.44  post=3.41  wall=24.03 ms
  [ 630/1000] pre=1.16  npu=16.61  post=3.56  wall=21.34 ms
  [ 640/1000] pre=1.18  npu=17.61  post=3.46  wall=22.26 ms
  [ 650/1000] pre=1.16  npu=17.88  post=3.41  wall=22.45 ms
  [ 660/1000] pre=1.13  npu=17.31  post=3.48  wall=21.93 ms
  [ 670/1000] pre=1.17  npu=17.30  post=3.46  wall=21.92 ms
  [ 680/1000] pre=1.13  npu=17.14  post=3.48  wall=21.75 ms
  [ 690/1000] pre=1.15  npu=18.50  post=3.55  wall=23.20 ms
  [ 700/1000] pre=1.15  npu=16.97  post=3.41  wall=21.54 ms
  [ 710/1000] pre=1.15  npu=17.11  post=3.40  wall=21.67 ms
  [ 720/1000] pre=1.17  npu=19.03  post=3.38  wall=23.58 ms
  [ 730/1000] pre=1.15  npu=20.10  post=3.83  wall=25.08 ms
  [ 740/1000] pre=1.17  npu=19.24  post=3.44  wall=23.84 ms
  [ 750/1000] pre=1.16  npu=16.92  post=3.40  wall=21.48 ms
  [ 760/1000] pre=1.17  npu=18.77  post=3.42  wall=23.35 ms
  [ 770/1000] pre=1.20  npu=19.68  post=3.47  wall=24.34 ms
  [ 780/1000] pre=0.78  npu=14.45  post=0.95  wall=16.19 ms
  [ 790/1000] pre=1.11  npu=18.82  post=3.41  wall=23.35 ms
  [ 800/1000] pre=1.25  npu=16.97  post=3.55  wall=21.76 ms
  [ 810/1000] pre=1.16  npu=15.27  post=3.43  wall=19.86 ms
  [ 820/1000] pre=1.17  npu=18.72  post=3.40  wall=23.29 ms
  [ 830/1000] pre=1.18  npu=19.23  post=3.40  wall=23.81 ms
  [ 840/1000] pre=1.17  npu=17.77  post=3.41  wall=22.35 ms
  [ 850/1000] pre=1.18  npu=17.82  post=3.44  wall=22.44 ms
  [ 860/1000] pre=1.20  npu=16.20  post=3.57  wall=20.97 ms
  [ 870/1000] pre=1.17  npu=19.56  post=3.41  wall=24.13 ms
  [ 880/1000] pre=1.18  npu=18.30  post=3.44  wall=22.92 ms
  [ 890/1000] pre=1.18  npu=18.21  post=3.41  wall=22.80 ms
  [ 900/1000] pre=1.17  npu=18.11  post=3.41  wall=22.69 ms
  [ 910/1000] pre=1.19  npu=17.12  post=3.41  wall=21.72 ms
  [ 920/1000] pre=1.26  npu=15.38  post=3.67  wall=20.31 ms
  [ 930/1000] pre=1.20  npu=19.42  post=3.47  wall=24.09 ms
  [ 940/1000] pre=1.21  npu=17.51  post=3.41  wall=22.13 ms
  [ 950/1000] pre=1.17  npu=19.17  post=3.53  wall=23.87 ms
  [ 960/1000] pre=1.18  npu=19.35  post=3.41  wall=23.94 ms
  [ 970/1000] pre=1.18  npu=17.31  post=3.38  wall=21.86 ms
  [ 980/1000] pre=1.18  npu=17.60  post=3.41  wall=22.18 ms
  [ 990/1000] pre=1.20  npu=19.33  post=3.41  wall=23.94 ms
  [1000/1000] pre=1.19  npu=19.82  post=3.44  wall=24.46 ms

=== Benchmark results (1000 runs) ===
  pre   avg :   1.18 ms
  npu   avg :  17.60 ms  (min 14.28  max 21.30)
  post  avg :   3.45 ms
  --------------------------------
  total avg :  22.23 ms  (45.0 FPS)
  wall  min :  15.99 ms  max 27.44 ms
person @ (211 241 282 506) 0.864
bus @ (96 136 549 449) 0.864
person @ (109 235 225 535) 0.860
person @ (477 226 560 522) 0.848
person @ (79 327 116 513) 0.306
write_image path: out.png width=640 height=640 channel=3 data=0x55c0bf7240
The end


```


```

taskset -c 4-5 ./rknn_yolov8_demo_zero_copy "$sDir/../common/model/yolov8n.rknn" "$sDir/../common/model/bus.jpg"

jetson@0000100000055:~/dev/cpp/y8tests$ ./v2-3/run.sh 
load lable ../../common/model/coco_80_labels_list.txt
model input num: 1, output num: 9
input tensors (native):
  index=0, name=images, n_dims=4, dims=[1, 640, 640, 3], n_elems=1228800, size=1228800, w_stride=640, size_with_stride=1228800, fmt=NHWC, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003922
output tensors (native):
  index=0, name=318, n_dims=5, dims=[1, 4, 80, 80, 16], n_elems=409600, size=409600, w_stride=0, size_with_stride=409600, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-58, scale=0.117659
  index=1, name=onnx::ReduceSum_326, n_dims=5, dims=[1, 6, 80, 80, 16], n_elems=614400, size=614400, w_stride=0, size_with_stride=614400, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003104
  index=2, name=331, n_dims=5, dims=[1, 2, 80, 80, 16], n_elems=204800, size=204800, w_stride=0, size_with_stride=204800, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003173
  index=3, name=338, n_dims=5, dims=[1, 4, 40, 40, 16], n_elems=102400, size=102400, w_stride=0, size_with_stride=102400, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-45, scale=0.093747
  index=4, name=onnx::ReduceSum_346, n_dims=5, dims=[1, 6, 40, 40, 16], n_elems=153600, size=153600, w_stride=0, size_with_stride=153600, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003594
  index=5, name=350, n_dims=5, dims=[1, 2, 40, 40, 16], n_elems=51200, size=51200, w_stride=0, size_with_stride=51200, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003627
  index=6, name=357, n_dims=5, dims=[1, 4, 20, 20, 16], n_elems=25600, size=25600, w_stride=0, size_with_stride=25600, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-34, scale=0.083036
  index=7, name=onnx::ReduceSum_365, n_dims=5, dims=[1, 6, 20, 20, 16], n_elems=38400, size=38400, w_stride=0, size_with_stride=38400, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003874
  index=8, name=369, n_dims=5, dims=[1, 2, 20, 20, 16], n_elems=12800, size=12800, w_stride=0, size_with_stride=12800, fmt=NC1HWC2, type=INT8, qnt_type=AFFINE, zp=-128, scale=0.003922
model is NHWC input fmt
model input height=640, width=640, channel=3
origin size=640x640 crop size=640x640
input image: 640 x 640, subsampling: 4:2:0, colorspace: YCbCr, orientation: 1
rga_api version 1.10.1_[0]
Warmup: pre=1.02  npu=14.67  post=1.34 ms
  [  10/1000] pre=0.72  npu=15.00  post=0.91  wall=16.63 ms
  [  20/1000] pre=0.77  npu=14.53  post=0.93  wall=16.24 ms
  [  30/1000] pre=0.78  npu=14.62  post=0.91  wall=16.32 ms
  [  40/1000] pre=0.71  npu=14.29  post=0.90  wall=15.91 ms
  [  50/1000] pre=0.71  npu=14.53  post=0.90  wall=16.14 ms
  [  60/1000] pre=0.77  npu=14.28  post=0.92  wall=15.98 ms
  [  70/1000] pre=0.72  npu=14.82  post=0.92  wall=16.46 ms
  [  80/1000] pre=0.77  npu=14.32  post=0.93  wall=16.03 ms
  [  90/1000] pre=0.71  npu=14.51  post=0.90  wall=16.12 ms
  [ 100/1000] pre=0.77  npu=14.30  post=0.90  wall=15.96 ms
  [ 110/1000] pre=0.71  npu=14.24  post=0.90  wall=15.85 ms
  [ 120/1000] pre=0.75  npu=14.51  post=0.90  wall=16.16 ms
  [ 130/1000] pre=0.73  npu=14.46  post=0.90  wall=16.09 ms
  [ 140/1000] pre=0.74  npu=14.49  post=0.90  wall=16.13 ms
  [ 150/1000] pre=0.71  npu=14.47  post=0.91  wall=16.09 ms
  [ 160/1000] pre=0.71  npu=21.41  post=0.94  wall=23.06 ms
  [ 170/1000] pre=0.75  npu=14.33  post=0.91  wall=15.98 ms
  [ 180/1000] pre=0.71  npu=14.53  post=0.91  wall=16.15 ms
  [ 190/1000] pre=0.71  npu=14.38  post=0.90  wall=15.98 ms
  [ 200/1000] pre=0.72  npu=14.22  post=0.92  wall=15.86 ms
  [ 210/1000] pre=0.73  npu=14.57  post=0.91  wall=16.21 ms
  [ 220/1000] pre=0.71  npu=14.45  post=1.04  wall=16.19 ms
  [ 230/1000] pre=0.70  npu=14.59  post=0.90  wall=16.20 ms
  [ 240/1000] pre=0.71  npu=14.44  post=0.90  wall=16.05 ms
  [ 250/1000] pre=0.71  npu=14.21  post=0.91  wall=15.82 ms
  [ 260/1000] pre=0.73  npu=14.24  post=0.91  wall=15.88 ms
  [ 270/1000] pre=0.73  npu=14.42  post=0.93  wall=16.09 ms
  [ 280/1000] pre=0.71  npu=14.46  post=0.90  wall=16.06 ms
  [ 290/1000] pre=0.71  npu=14.33  post=0.90  wall=15.95 ms
  [ 300/1000] pre=0.71  npu=14.19  post=0.90  wall=15.80 ms
  [ 310/1000] pre=0.76  npu=14.41  post=0.90  wall=16.07 ms
  [ 320/1000] pre=0.71  npu=14.34  post=0.95  wall=15.99 ms
  [ 330/1000] pre=0.75  npu=14.70  post=0.92  wall=16.37 ms
  [ 340/1000] pre=0.73  npu=14.48  post=0.90  wall=16.12 ms
  [ 350/1000] pre=0.72  npu=14.23  post=0.90  wall=15.85 ms
  [ 360/1000] pre=0.71  npu=14.49  post=0.90  wall=16.09 ms
  [ 370/1000] pre=0.71  npu=14.60  post=0.90  wall=16.22 ms
  [ 380/1000] pre=0.71  npu=14.55  post=0.90  wall=16.16 ms
  [ 390/1000] pre=0.71  npu=14.61  post=0.90  wall=16.22 ms
  [ 400/1000] pre=0.77  npu=14.26  post=0.91  wall=15.95 ms
  [ 410/1000] pre=0.75  npu=14.53  post=0.92  wall=16.20 ms
  [ 420/1000] pre=0.72  npu=14.57  post=0.90  wall=16.20 ms
  [ 430/1000] pre=0.71  npu=14.72  post=0.91  wall=16.34 ms
  [ 440/1000] pre=0.72  npu=14.52  post=0.89  wall=16.13 ms
  [ 450/1000] pre=0.72  npu=14.53  post=0.90  wall=16.15 ms
  [ 460/1000] pre=0.71  npu=14.52  post=0.90  wall=16.13 ms
  [ 470/1000] pre=0.71  npu=14.69  post=0.90  wall=16.30 ms
  [ 480/1000] pre=0.71  npu=14.64  post=0.90  wall=16.26 ms
  [ 490/1000] pre=0.71  npu=14.91  post=0.90  wall=16.53 ms
  [ 500/1000] pre=0.71  npu=14.52  post=0.90  wall=16.13 ms
  [ 510/1000] pre=0.75  npu=14.33  post=0.91  wall=15.99 ms
  [ 520/1000] pre=0.75  npu=14.51  post=0.90  wall=16.17 ms
  [ 530/1000] pre=0.71  npu=14.49  post=0.90  wall=16.11 ms
  [ 540/1000] pre=0.71  npu=14.40  post=0.90  wall=16.02 ms
  [ 550/1000] pre=0.73  npu=14.44  post=0.90  wall=16.06 ms
  [ 560/1000] pre=0.71  npu=14.78  post=0.90  wall=16.38 ms
  [ 570/1000] pre=0.72  npu=14.39  post=0.90  wall=16.01 ms
  [ 580/1000] pre=0.72  npu=14.49  post=0.90  wall=16.11 ms
  [ 590/1000] pre=0.78  npu=14.28  post=0.91  wall=15.97 ms
  [ 600/1000] pre=0.76  npu=14.51  post=0.90  wall=16.17 ms
  [ 610/1000] pre=0.73  npu=14.47  post=0.91  wall=16.11 ms
  [ 620/1000] pre=0.72  npu=14.60  post=0.90  wall=16.22 ms
  [ 630/1000] pre=0.77  npu=14.70  post=0.94  wall=16.41 ms
  [ 640/1000] pre=0.79  npu=14.32  post=0.93  wall=16.05 ms
  [ 650/1000] pre=0.79  npu=16.63  post=0.91  wall=18.34 ms
  [ 660/1000] pre=0.77  npu=15.39  post=0.91  wall=17.07 ms
  [ 670/1000] pre=0.72  npu=14.22  post=0.90  wall=15.85 ms
  [ 680/1000] pre=0.76  npu=16.47  post=0.90  wall=18.12 ms
  [ 690/1000] pre=0.75  npu=16.47  post=0.90  wall=18.12 ms
  [ 700/1000] pre=0.80  npu=15.53  post=0.93  wall=17.26 ms
  [ 710/1000] pre=0.76  npu=16.51  post=0.90  wall=18.16 ms
  [ 720/1000] pre=0.75  npu=14.77  post=0.90  wall=16.42 ms
  [ 730/1000] pre=0.76  npu=15.11  post=0.90  wall=16.77 ms
  [ 740/1000] pre=0.76  npu=16.52  post=0.90  wall=18.18 ms
  [ 750/1000] pre=0.73  npu=14.56  post=0.90  wall=16.20 ms
  [ 760/1000] pre=0.75  npu=16.51  post=0.90  wall=18.16 ms
  [ 770/1000] pre=0.75  npu=16.61  post=0.95  wall=18.31 ms
  [ 780/1000] pre=0.76  npu=16.52  post=0.90  wall=18.18 ms
  [ 790/1000] pre=0.98  npu=16.59  post=0.92  wall=18.50 ms
  [ 800/1000] pre=0.76  npu=16.51  post=0.90  wall=18.18 ms
  [ 810/1000] pre=0.76  npu=16.51  post=0.90  wall=18.18 ms
  [ 820/1000] pre=0.80  npu=15.19  post=0.90  wall=16.89 ms
  [ 830/1000] pre=0.78  npu=15.05  post=0.93  wall=16.76 ms
  [ 840/1000] pre=0.76  npu=16.52  post=0.90  wall=18.19 ms
  [ 850/1000] pre=0.76  npu=16.40  post=0.90  wall=18.06 ms
  [ 860/1000] pre=0.78  npu=14.29  post=0.93  wall=16.01 ms
  [ 870/1000] pre=0.80  npu=16.45  post=0.91  wall=18.16 ms
  [ 880/1000] pre=0.76  npu=16.52  post=0.90  wall=18.18 ms
  [ 890/1000] pre=0.74  npu=14.25  post=0.91  wall=15.89 ms
  [ 900/1000] pre=0.71  npu=14.31  post=0.90  wall=15.93 ms
  [ 910/1000] pre=0.76  npu=15.15  post=0.90  wall=16.80 ms
  [ 920/1000] pre=0.72  npu=14.22  post=0.90  wall=15.85 ms
  [ 930/1000] pre=0.77  npu=14.26  post=0.92  wall=15.95 ms
  [ 940/1000] pre=0.76  npu=15.10  post=0.90  wall=16.75 ms
  [ 950/1000] pre=0.78  npu=14.26  post=0.91  wall=15.95 ms
  [ 960/1000] pre=0.76  npu=14.28  post=0.90  wall=15.94 ms
  [ 970/1000] pre=0.75  npu=14.35  post=0.90  wall=16.01 ms
  [ 980/1000] pre=0.75  npu=14.39  post=0.90  wall=16.05 ms
  [ 990/1000] pre=0.75  npu=14.44  post=0.90  wall=16.09 ms
  [1000/1000] pre=0.76  npu=14.45  post=0.90  wall=16.11 ms

=== Benchmark results (1000 runs) ===
  pre   avg :   0.74 ms
  npu   avg :  14.85 ms  (min 14.15  max 21.41)
  post  avg :   0.91 ms
  --------------------------------
  total avg :  16.50 ms  (60.6 FPS)
  wall  min :  15.78 ms  max 23.06 ms
person @ (211 241 282 506) 0.864
bus @ (96 136 549 449) 0.864
person @ (109 235 225 535) 0.860
person @ (477 226 560 522) 0.848
person @ (79 327 116 513) 0.306
write_image path: out.png width=640 height=640 channel=3 data=0x55c9110240
The end


```

