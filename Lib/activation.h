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

#endif // ACTIVATION_H_
