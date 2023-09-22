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

#endif // ACTIVATION_H_
