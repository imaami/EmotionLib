#ifndef ACTIVATION_H_
#define ACTIVATION_H_

#include "common.h"

LIB_HIDDEN extern void
add_1_896_14_14 (const float A[1][896][14][14],
                 const float B[1][896][14][14],
                 float       C[1][896][14][14]);

LIB_HIDDEN extern void
mul_1_896_14_14 (const float A[1][896][14][14],
                 const float B[1],
                 float       C[1][896][14][14]);

LIB_HIDDEN extern void
mul2_1_896_14_14 (const float A[1][896][14][14],
                  const float B[1][896][14][14],
                  float       C[1][896][14][14]);

LIB_HIDDEN extern void
sigmoid_1_896_14_14 (const float X[1][896][14][14],
                     float       Y[1][896][14][14]);

LIB_HIDDEN extern void
softplus_1_896_14_14 (const float X[1][896][14][14],
                      float       Y[1][896][14][14]);

LIB_HIDDEN extern void
tanh_1_896_14_14 (const float X[1][896][14][14],
                  float       Y[1][896][14][14]);

LIB_HIDDEN extern void
func_e0f0970f536 (const float x[1][896][14][14],
                  const float w[896][896][1][1],
                  const float bias[896],
                  float       y[1][896][14][14]);

LIB_HIDDEN extern void
func_c1c0d1ba7d5 (const float A[1][448][28][28],
                  const float B[1][448][28][28],
                  float       C[1][448][28][28]);

LIB_HIDDEN extern void
func_fe352416748 (const float A[1][448][28][28],
                  const float B[1][448][28][28],
                  float       C[1][448][28][28]);

LIB_HIDDEN extern void
func_f71959ee7d8 (const float X[1][448][28][28],
                  float       Y[1][448][28][28]);

LIB_HIDDEN extern void
func_c558353a400 (const float X[1][448][28][28],
                  float       Y[1][448][28][28]);

LIB_HIDDEN extern void
func_43b9e758e01 (const float X[1][448][28][28],
                  float       Y[1][448][28][28]);

LIB_HIDDEN extern void
func_348d0734aa0 (const float A[1][448][28][28],
                  const float B[1],
                  float       C[1][448][28][28]);

LIB_HIDDEN extern void
func_d0392d54c3d (const float X[1][896][1][1],
                  float       Y[1][896][1][1]);

LIB_HIDDEN extern void
func_8f11a1fbb7d (const float X[1][224][1][1],
                  float       Y[1][224][1][1]);

LIB_HIDDEN extern void
func_83eedcc347c (const float A[1][224][1][1],
                  const float B[1][224][1][1],
                  float       C[1][224][1][1]);

LIB_HIDDEN extern void
func_7637f5931c0 (const float A[1][896][14][14],
                  const float B[1][896][1][1],
                  float       C[1][896][14][14]);

LIB_HIDDEN extern void
func_630fd67a50d (const float A[1][224][1][1],
                  const float B[1],
                  float       C[1][224][1][1]);

LIB_HIDDEN extern void
func_588505254d8 (const float input[1][896][14][14],
                  float       output[1][896][1][1]);

LIB_HIDDEN extern void
func_3fd747a7427 (const float A[1][224][1][1],
                  const float B[1][224][1][1],
                  float       C[1][224][1][1]);

LIB_HIDDEN extern void
func_0e8e856c2fe (const float X[1][224][1][1],
                  float       Y[1][224][1][1]);

LIB_HIDDEN extern void
func_0a1dfd9d8eb (const float X[1][224][1][1],
                  float       Y[1][224][1][1]);

LIB_HIDDEN extern void
func_dbbae7cbb81 (const float x[1][896][1][1],
                  const float w[224][896][1][1],
                  const float bias[224],
                  float       y[1][224][1][1]);

LIB_HIDDEN extern void
func_8c9c2b9a537 (const float x[1][896][14][14],
                  const float w[896][56][3][3],
                  const float bias[896],
                  float       y[1][896][14][14]);

LIB_HIDDEN extern void
func_24bd64319b5 (const float x[1][224][1][1],
                  const float w[896][224][1][1],
                  const float bias[896],
                  float       y[1][896][1][1]);

LIB_HIDDEN extern void
func_d83947690c8 (const float x[1][448][28][28],
                  const float w[448][448][1][1],
                  const float bias[448],
                  float       y[1][448][28][28]);

LIB_HIDDEN extern void
func_01ab67f7680 (const float A[1][168][56][56],
                  const float B[1][168][56][56],
                  float       C[1][168][56][56]);

LIB_HIDDEN extern void
func_e6848ebc170 (const float X[1][168][56][56],
                  float       Y[1][168][56][56]);

LIB_HIDDEN extern void
func_a8fcef9491d (const float X[1][168][56][56],
                  float       Y[1][168][56][56]);

LIB_HIDDEN extern void
func_7ae0037bce3 (const float A[1][168][56][56],
                  const float B[1][168][56][56],
                  float       C[1][168][56][56]);

LIB_HIDDEN extern void
func_37d72843087 (const float X[1][168][56][56],
                  float       Y[1][168][56][56]);

LIB_HIDDEN extern void
func_1b6d698ef43 (const float A[1][168][56][56],
                  const float B[1],
                  float       C[1][168][56][56]);

LIB_HIDDEN extern void
func_fe391e43ecd (const float X[1][112][1][1],
                  float       Y[1][112][1][1]);

LIB_HIDDEN extern void
func_f52c654ab60 (const float X[1][112][1][1],
                  float       Y[1][112][1][1]);

LIB_HIDDEN extern void
func_f2fe9c06a98 (const float A[1][112][1][1],
                  const float B[1][112][1][1],
                  float       C[1][112][1][1]);

LIB_HIDDEN extern void
func_9c5643a6f0a (const float X[1][448][1][1],
                  float       Y[1][448][1][1]);

LIB_HIDDEN extern void
func_850c20b50e1 (const float X[1][112][1][1],
                  float       Y[1][112][1][1]);

LIB_HIDDEN extern void
func_59e9f807f4c (const float input[1][448][28][28],
                  float       output[1][448][1][1]);

LIB_HIDDEN extern void
func_4e66d83a223 (const float A[1][112][1][1],
                  const float B[1][112][1][1],
                  float       C[1][112][1][1]);

LIB_HIDDEN extern void
func_33fbc985d50 (const float A[1][448][28][28],
                  const float B[1][448][1][1],
                  float       C[1][448][28][28]);

LIB_HIDDEN extern void
func_332a650925a (const float A[1][112][1][1],
                  const float B[1],
                  float       C[1][112][1][1]);

#endif // ACTIVATION_H_
