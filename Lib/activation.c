#include <math.h>
#include <stdint.h>

#include "activation.h"

LIB_HIDDEN void
add_1_896_14_14 (const float A[1][896][14][14],
                 const float B[1][896][14][14],
                 float       C[1][896][14][14])
{
	/* Add
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i1 = 0; i1 < 896; i1++) {
		for (unsigned i2 = 0; i2 < 14; i2++) {
			for (unsigned i3 = 0; i3 < 14; i3++) {
				C[0][i1][i2][i3] = A[0][i1][i2][i3] + B[0][i1][i2][i3];
			}
		}
	}
}

LIB_HIDDEN void
mul_1_896_14_14 (const float A[1][896][14][14],
                 const float B[1],
                 float       C[1][896][14][14])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i1 = 0; i1 < 896; i1++) {
		for (unsigned i2 = 0; i2 < 14; i2++) {
			for (unsigned i3 = 0; i3 < 14; i3++) {
				C[0][i1][i2][i3] = A[0][i1][i2][i3] * B[0];
			}
		}
	}
}

LIB_HIDDEN void
mul2_1_896_14_14 (const float A[1][896][14][14],
                  const float B[1][896][14][14],
                  float       C[1][896][14][14])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i1 = 0; i1 < 896; i1++) {
		for (unsigned i2 = 0; i2 < 14; i2++) {
			for (unsigned i3 = 0; i3 < 14; i3++) {
				C[0][i1][i2][i3] = A[0][i1][i2][i3] * B[0][i1][i2][i3];
			}
		}
	}
}

LIB_HIDDEN void
sigmoid_1_896_14_14 (const float X[1][896][14][14],
                     float       Y[1][896][14][14])
{
	/* Sigmoid
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i1 = 0; i1 < 896; i1++) {
		for (unsigned i2 = 0; i2 < 14; i2++) {
			for (unsigned i3 = 0; i3 < 14; i3++) {
				Y[0][i1][i2][i3] = 1.0f / (1.0f + expf(-X[0][i1][i2][i3]));
			}
		}
	}
}

LIB_HIDDEN void
softplus_1_896_14_14 (const float X[1][896][14][14],
                      float       Y[1][896][14][14])
{
	/* Softplus
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i1 = 0; i1 < 896; i1++) {
		for (unsigned i2 = 0; i2 < 14; i2++) {
			for (unsigned i3 = 0; i3 < 14; i3++) {
				Y[0][i1][i2][i3] = logf(expf(X[0][i1][i2][i3]) + 1.0f);
			}
		}
	}
}

LIB_HIDDEN void
tanh_1_896_14_14 (const float X[1][896][14][14],
                  float       Y[1][896][14][14])
{
	/* Tanh
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i1 = 0; i1 < 896; i1++) {
		for (unsigned i2 = 0; i2 < 14; i2++) {
			for (unsigned i3 = 0; i3 < 14; i3++) {
				Y[0][i1][i2][i3] = tanhf(X[0][i1][i2][i3]);
			}
		}
	}
}

LIB_HIDDEN void
func_e0f0970f536 (const float x[1][896][14][14],
                  const float w[896][896][1][1],
                  const float bias[896],
                  float       y[1][896][14][14])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 896; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 14; o0++, i0 += 1) {
				for (int32_t o1 = 0, i1 = 0; o1 < 14; o1++, i1 += 1) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 896; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 14)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 14)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_c1c0d1ba7d5 (const float A[1][448][28][28],
                  const float B[1][448][28][28],
                  float       C[1][448][28][28])
{
	/* Add
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 448; i1++) {
			for (unsigned i2 = 0; i2 < 28; i2++) {
				for (unsigned i3 = 0; i3 < 28; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] + B[0][i1][i2][i3];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_fe352416748 (const float A[1][448][28][28],
                  const float B[1][448][28][28],
                  float       C[1][448][28][28])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 448; i1++) {
			for (unsigned i2 = 0; i2 < 28; i2++) {
				for (unsigned i3 = 0; i3 < 28; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] * B[0][i1][i2][i3];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_f71959ee7d8 (const float X[1][448][28][28],
                  float       Y[1][448][28][28])
{
	/* Tanh
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 448; i1++) {
			for (unsigned i2 = 0; i2 < 28; i2++) {
				for (unsigned i3 = 0; i3 < 28; i3++) {
					Y[i0][i1][i2][i3] = tanhf(X[i0][i1][i2][i3]);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_c558353a400 (const float X[1][448][28][28],
                  float       Y[1][448][28][28])
{
	/* Softplus
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 448; i1++) {
			for (unsigned i2 = 0; i2 < 28; i2++) {
				for (unsigned i3 = 0; i3 < 28; i3++) {
					Y[i0][i1][i2][i3] = logf(exp(X[i0][i1][i2][i3]) + 1);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_43b9e758e01 (const float X[1][448][28][28],
                  float       Y[1][448][28][28])
{
	/* Sigmoid
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 448; i1++) {
			for (unsigned i2 = 0; i2 < 28; i2++) {
				for (unsigned i3 = 0; i3 < 28; i3++) {
					Y[i0][i1][i2][i3] = 1 / (1 + exp(-X[i0][i1][i2][i3]));
				}
			}
		}
	}
}

LIB_HIDDEN void
func_348d0734aa0 (const float A[1][448][28][28],
                  const float B[1],
                  float       C[1][448][28][28])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 448; i1++) {
			for (unsigned i2 = 0; i2 < 28; i2++) {
				for (unsigned i3 = 0; i3 < 28; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] * B[0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_d0392d54c3d (const float X[1][896][1][1],
                  float       Y[1][896][1][1])
{
	/* Sigmoid
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 896; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					Y[i0][i1][i2][i3] = 1 / (1 + exp(-X[i0][i1][i2][i3]));
				}
			}
		}
	}
}

LIB_HIDDEN void
func_8f11a1fbb7d (const float X[1][224][1][1],
                  float       Y[1][224][1][1])
{
	/* Sigmoid
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 224; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					Y[i0][i1][i2][i3] = 1 / (1 + exp(-X[i0][i1][i2][i3]));
				}
			}
		}
	}
}

LIB_HIDDEN void
func_83eedcc347c (const float A[1][224][1][1],
                  const float B[1][224][1][1],
                  float       C[1][224][1][1])
{
	/* Add
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 224; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][0][0] + B[0][i1][0][0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_7637f5931c0 (const float A[1][896][14][14],
                  const float B[1][896][1][1],
                  float       C[1][896][14][14])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 896; i1++) {
			for (unsigned i2 = 0; i2 < 14; i2++) {
				for (unsigned i3 = 0; i3 < 14; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] * B[0][i1][0][0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_630fd67a50d (const float A[1][224][1][1],
                  const float B[1],
                  float       C[1][224][1][1])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 224; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][0][0] * B[0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_588505254d8 (const float input[1][896][14][14],
                  float       output[1][896][1][1])
{
	/* GlobalAveragePool */
	for (int32_t b = 0; b < 1; b++) {
		for (int32_t c = 0; c < 896; c++) {
			float dimsum = 0.00000f;
			for (int32_t d0 = 0; d0 < 14; d0++) {
				for (int32_t d1 = 0; d1 < 14; d1++) {
					dimsum += input[b][c][d0][d1];
				}
			}
			output[b][c][0][0] = dimsum / 196;
		}
	}
}

LIB_HIDDEN void
func_3fd747a7427 (const float A[1][224][1][1],
                  const float B[1][224][1][1],
                  float       C[1][224][1][1])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 224; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][0][0] * B[0][i1][0][0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_0e8e856c2fe (const float X[1][224][1][1],
                  float       Y[1][224][1][1])
{
	/* Tanh
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 224; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					Y[i0][i1][i2][i3] = tanhf(X[i0][i1][i2][i3]);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_0a1dfd9d8eb (const float X[1][224][1][1],
                  float       Y[1][224][1][1])
{
	/* Softplus
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 224; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					Y[i0][i1][i2][i3] = logf(exp(X[i0][i1][i2][i3]) + 1);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_dbbae7cbb81 (const float x[1][896][1][1],
                  const float w[224][896][1][1],
                  const float bias[224],
                  float       y[1][224][1][1])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 224; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 1; o0++, i0 += 1) {
				for (int32_t o1 = 0, i1 = 0; o1 < 1; o1++, i1 += 1) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 896; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 1)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 1)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_8c9c2b9a537 (const float x[1][896][14][14],
                  const float w[896][56][3][3],
                  const float bias[896],
                  float       y[1][896][14][14])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 16
	 * kernel_shape: 3 3
	 * pads: 1 1 1 1
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		uint32_t go = 56; // output group size, i.e. maps/group
		uint32_t gi = 56; // inptput group size, i.e. channels/group
		for (uint32_t g = 0; g < 16; g++) {
			for (uint32_t m = go * g; m < go * (g + 1); m++) {
				for (int32_t o0 = 0, i0 = -1; o0 < 14; o0++, i0 += 1) {
					for (int32_t o1 = 0, i1 = -1; o1 < 14; o1++, i1 += 1) {
						y[b][m][o0][o1] = bias[m];
						for (int32_t c = gi * g; c < gi * (g + 1); c++) {
							for (uint32_t k0 = 0; k0 < 3; k0++) {
								for (uint32_t k1 = 0; k1 < 3; k1++) {
									int ii0 = i0 + k0 * 1;
									if (ii0 < 0)
										continue;
									if (ii0 >= 14)
										continue;
									int ii1 = i1 + k1 * 1;
									if (ii1 < 0)
										continue;
									if (ii1 >= 14)
										continue;
									y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c - (gi * g)][k0][k1];
								} /* k */
							}         /* k */
						}                 /* c */
					}                         /* o */
				}                                 /* o */
			}                                         /* m */
		}                                                 /* g */
	}                                                         /* b */
}

LIB_HIDDEN void
func_24bd64319b5 (const float x[1][224][1][1],
                  const float w[896][224][1][1],
                  const float bias[896],
                  float       y[1][896][1][1])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 896; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 1; o0++, i0 += 1) {
				for (int32_t o1 = 0, i1 = 0; o1 < 1; o1++, i1 += 1) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 224; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 1)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 1)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_d83947690c8 (const float x[1][448][28][28],
                  const float w[448][448][1][1],
                  const float bias[448],
                  float       y[1][448][28][28])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 448; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 28; o0++, i0 += 1) {
				for (int32_t o1 = 0, i1 = 0; o1 < 28; o1++, i1 += 1) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 448; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 28)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 28)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_01ab67f7680 (const float A[1][168][56][56],
                  const float B[1][168][56][56],
                  float       C[1][168][56][56])
{
	/* Add
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 168; i1++) {
			for (unsigned i2 = 0; i2 < 56; i2++) {
				for (unsigned i3 = 0; i3 < 56; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] + B[0][i1][i2][i3];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_e6848ebc170 (const float X[1][168][56][56],
                  float       Y[1][168][56][56])
{
	/* Softplus
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 168; i1++) {
			for (unsigned i2 = 0; i2 < 56; i2++) {
				for (unsigned i3 = 0; i3 < 56; i3++) {
					Y[i0][i1][i2][i3] = logf(exp(X[i0][i1][i2][i3]) + 1);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_a8fcef9491d (const float X[1][168][56][56],
                  float       Y[1][168][56][56])
{
	/* Sigmoid
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 168; i1++) {
			for (unsigned i2 = 0; i2 < 56; i2++) {
				for (unsigned i3 = 0; i3 < 56; i3++) {
					Y[i0][i1][i2][i3] = 1 / (1 + exp(-X[i0][i1][i2][i3]));
				}
			}
		}
	}
}

LIB_HIDDEN void
func_7ae0037bce3 (const float A[1][168][56][56],
                  const float B[1][168][56][56],
                  float       C[1][168][56][56])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 168; i1++) {
			for (unsigned i2 = 0; i2 < 56; i2++) {
				for (unsigned i3 = 0; i3 < 56; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] * B[0][i1][i2][i3];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_37d72843087 (const float X[1][168][56][56],
                  float       Y[1][168][56][56])
{
	/* Tanh
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 168; i1++) {
			for (unsigned i2 = 0; i2 < 56; i2++) {
				for (unsigned i3 = 0; i3 < 56; i3++) {
					Y[i0][i1][i2][i3] = tanhf(X[i0][i1][i2][i3]);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_1b6d698ef43 (const float A[1][168][56][56],
                  const float B[1],
                  float       C[1][168][56][56])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 168; i1++) {
			for (unsigned i2 = 0; i2 < 56; i2++) {
				for (unsigned i3 = 0; i3 < 56; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] * B[0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_fe391e43ecd (const float X[1][112][1][1],
                  float       Y[1][112][1][1])
{
	/* Sigmoid
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 112; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					Y[i0][i1][i2][i3] = 1 / (1 + exp(-X[i0][i1][i2][i3]));
				}
			}
		}
	}
}

LIB_HIDDEN void
func_f52c654ab60 (const float X[1][112][1][1],
                  float       Y[1][112][1][1])
{
	/* Softplus
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 112; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					Y[i0][i1][i2][i3] = logf(exp(X[i0][i1][i2][i3]) + 1);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_f2fe9c06a98 (const float A[1][112][1][1],
                  const float B[1][112][1][1],
                  float       C[1][112][1][1])
{
	/* Add
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 112; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][0][0] + B[0][i1][0][0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_9c5643a6f0a (const float X[1][448][1][1],
                  float       Y[1][448][1][1])
{
	/* Sigmoid
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 448; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					Y[i0][i1][i2][i3] = 1 / (1 + exp(-X[i0][i1][i2][i3]));
				}
			}
		}
	}
}

LIB_HIDDEN void
func_850c20b50e1 (const float X[1][112][1][1],
                  float       Y[1][112][1][1])
{
	/* Tanh
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 112; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					Y[i0][i1][i2][i3] = tanhf(X[i0][i1][i2][i3]);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_59e9f807f4c (const float input[1][448][28][28],
                  float       output[1][448][1][1])
{
	/* GlobalAveragePool */
	for (int32_t b = 0; b < 1; b++) {
		for (int32_t c = 0; c < 448; c++) {
			float dimsum = 0.00000f;
			for (int32_t d0 = 0; d0 < 28; d0++) {
				for (int32_t d1 = 0; d1 < 28; d1++) {
					dimsum += input[b][c][d0][d1];
				}
			}
			output[b][c][0][0] = dimsum / 784;
		}
	}
}

LIB_HIDDEN void
func_4e66d83a223 (const float A[1][112][1][1],
                  const float B[1][112][1][1],
                  float       C[1][112][1][1])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 112; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][0][0] * B[0][i1][0][0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_33fbc985d50 (const float A[1][448][28][28],
                  const float B[1][448][1][1],
                  float       C[1][448][28][28])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 448; i1++) {
			for (unsigned i2 = 0; i2 < 28; i2++) {
				for (unsigned i3 = 0; i3 < 28; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] * B[0][i1][0][0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_332a650925a (const float A[1][112][1][1],
                  const float B[1],
                  float       C[1][112][1][1])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 112; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][0][0] * B[0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_c2f45289b07 (const float x[1][448][28][28],
                  const float w[448][56][3][3],
                  const float bias[448],
                  float       y[1][448][28][28])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 8
	 * kernel_shape: 3 3
	 * pads: 1 1 1 1
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		uint32_t go = 56; // output group size, i.e. maps/group
		uint32_t gi = 56; // inptput group size, i.e. channels/group
		for (uint32_t g = 0; g < 8; g++) {
			for (uint32_t m = go * g; m < go * (g + 1); m++) {
				for (int32_t o0 = 0, i0 = -1; o0 < 28; o0++, i0 += 1) {
					for (int32_t o1 = 0, i1 = -1; o1 < 28; o1++, i1 += 1) {
						y[b][m][o0][o1] = bias[m];
						for (int32_t c = gi * g; c < gi * (g + 1); c++) {
							for (uint32_t k0 = 0; k0 < 3; k0++) {
								for (uint32_t k1 = 0; k1 < 3; k1++) {
									int ii0 = i0 + k0 * 1;
									if (ii0 < 0)
										continue;
									if (ii0 >= 28)
										continue;
									int ii1 = i1 + k1 * 1;
									if (ii1 < 0)
										continue;
									if (ii1 >= 28)
										continue;
									y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c - (gi * g)][k0][k1];
								} /* k */
							}         /* k */
						}                 /* c */
					}                         /* o */
				}                                 /* o */
			}                                         /* m */
		}                                                 /* g */
	}                                                         /* b */
}

LIB_HIDDEN void
func_a8d1ba02fec (const float x[1][168][56][56],
                  const float w[168][168][1][1],
                  const float bias[168],
                  float       y[1][168][56][56])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 168; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 56; o0++, i0 += 1) {
				for (int32_t o1 = 0, i1 = 0; o1 < 56; o1++, i1 += 1) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 168; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 56)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 56)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_a78eb1ca502 (const float A[1][2016][7][7],
                  const float B[1][2016][7][7],
                  float       C[1][2016][7][7])
{
	/* Add
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 2016; i1++) {
			for (unsigned i2 = 0; i2 < 7; i2++) {
				for (unsigned i3 = 0; i3 < 7; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] + B[0][i1][i2][i3];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_638785b3659 (const float x[1][112][1][1],
                  const float w[448][112][1][1],
                  const float bias[448],
                  float       y[1][448][1][1])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 448; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 1; o0++, i0 += 1) {
				for (int32_t o1 = 0, i1 = 0; o1 < 1; o1++, i1 += 1) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 112; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 1)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 1)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_190bd454425 (const float x[1][448][1][1],
                  const float w[112][448][1][1],
                  const float bias[112],
                  float       y[1][112][1][1])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 112; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 1; o0++, i0 += 1) {
				for (int32_t o1 = 0, i1 = 0; o1 < 1; o1++, i1 += 1) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 448; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 1)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 1)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_ecaf0c6cbc9 (const float X[1][2016][7][7],
                  float       Y[1][2016][7][7])
{
	/* Tanh
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 2016; i1++) {
			for (unsigned i2 = 0; i2 < 7; i2++) {
				for (unsigned i3 = 0; i3 < 7; i3++) {
					Y[i0][i1][i2][i3] = tanhf(X[i0][i1][i2][i3]);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_c68fae9f00c (const float input[1][168][56][56],
                  float       output[1][168][1][1])
{
	/* GlobalAveragePool */
	for (int32_t b = 0; b < 1; b++) {
		for (int32_t c = 0; c < 168; c++) {
			float dimsum = 0.00000f;
			for (int32_t d0 = 0; d0 < 56; d0++) {
				for (int32_t d1 = 0; d1 < 56; d1++) {
					dimsum += input[b][c][d0][d1];
				}
			}
			output[b][c][0][0] = dimsum / 3136;
		}
	}
}

LIB_HIDDEN void
func_c559a6ca992 (const float input[1][2016][7][7],
                  float       output[1][2016][1][1])
{
	/* GlobalAveragePool */
	for (int32_t b = 0; b < 1; b++) {
		for (int32_t c = 0; c < 2016; c++) {
			float dimsum = 0.00000f;
			for (int32_t d0 = 0; d0 < 7; d0++) {
				for (int32_t d1 = 0; d1 < 7; d1++) {
					dimsum += input[b][c][d0][d1];
				}
			}
			output[b][c][0][0] = dimsum / 49;
		}
	}
}

LIB_HIDDEN void
func_b7ec17f0ea3 (const float A[1][2016][7][7],
                  const float B[1],
                  float       C[1][2016][7][7])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 2016; i1++) {
			for (unsigned i2 = 0; i2 < 7; i2++) {
				for (unsigned i3 = 0; i3 < 7; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] * B[0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_b7e2f9b2d8b (const float A[1][42][1][1],
                  const float B[1][42][1][1],
                  float       C[1][42][1][1])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 42; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][0][0] * B[0][i1][0][0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_acf4d1c7f10 (const float X[1][2016][7][7],
                  float       Y[1][2016][7][7])
{
	/* Softplus
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 2016; i1++) {
			for (unsigned i2 = 0; i2 < 7; i2++) {
				for (unsigned i3 = 0; i3 < 7; i3++) {
					Y[i0][i1][i2][i3] = logf(exp(X[i0][i1][i2][i3]) + 1);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_a9f65a497cb (const float A[1][2016][7][7],
                  const float B[1][2016][7][7],
                  float       C[1][2016][7][7])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 2016; i1++) {
			for (unsigned i2 = 0; i2 < 7; i2++) {
				for (unsigned i3 = 0; i3 < 7; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] * B[0][i1][i2][i3];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_8e83ce12053 (const float X[1][42][1][1],
                  float       Y[1][42][1][1])
{
	/* Sigmoid
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 42; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					Y[i0][i1][i2][i3] = 1 / (1 + exp(-X[i0][i1][i2][i3]));
				}
			}
		}
	}
}

LIB_HIDDEN void
func_673643b7d31 (const float A[1][168][56][56],
                  const float B[1][168][1][1],
                  float       C[1][168][56][56])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 168; i1++) {
			for (unsigned i2 = 0; i2 < 56; i2++) {
				for (unsigned i3 = 0; i3 < 56; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] * B[0][i1][0][0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_5e628592137 (const float X[1][42][1][1],
                  float       Y[1][42][1][1])
{
	/* Softplus
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 42; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					Y[i0][i1][i2][i3] = logf(exp(X[i0][i1][i2][i3]) + 1);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_4d9b72c9e07 (const float X[1][42][1][1],
                  float       Y[1][42][1][1])
{
	/* Tanh
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 42; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					Y[i0][i1][i2][i3] = tanhf(X[i0][i1][i2][i3]);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_2c5bf9e3ffd (const float A[1][42][1][1],
                  const float B[1],
                  float       C[1][42][1][1])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 42; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][0][0] * B[0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_1d00fb8936f (const float X[1][2016][7][7],
                  float       Y[1][2016][7][7])
{
	/* Sigmoid
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 2016; i1++) {
			for (unsigned i2 = 0; i2 < 7; i2++) {
				for (unsigned i3 = 0; i3 < 7; i3++) {
					Y[i0][i1][i2][i3] = 1 / (1 + exp(-X[i0][i1][i2][i3]));
				}
			}
		}
	}
}

LIB_HIDDEN void
func_0de55b2c296 (const float A[1][42][1][1],
                  const float B[1][42][1][1],
                  float       C[1][42][1][1])
{
	/* Add
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 42; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][0][0] + B[0][i1][0][0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_0396437e541 (const float X[1][168][1][1],
                  float       Y[1][168][1][1])
{
	/* Sigmoid
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 168; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					Y[i0][i1][i2][i3] = 1 / (1 + exp(-X[i0][i1][i2][i3]));
				}
			}
		}
	}
}

LIB_HIDDEN void
func_fe798c4b643 (const float X[1][8][1][1],
                  float       Y[1][8][1][1])
{
	/* Softplus
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 8; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					Y[i0][i1][i2][i3] = logf(exp(X[i0][i1][i2][i3]) + 1);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_fa86f63a389 (const float X[1][8][1][1],
                  float       Y[1][8][1][1])
{
	/* Sigmoid
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 8; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					Y[i0][i1][i2][i3] = 1 / (1 + exp(-X[i0][i1][i2][i3]));
				}
			}
		}
	}
}

LIB_HIDDEN void
func_f737763e33a (const float x[1][168][1][1],
                  const float w[42][168][1][1],
                  const float bias[42],
                  float       y[1][42][1][1])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 42; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 1; o0++, i0 += 1) {
				for (int32_t o1 = 0, i1 = 0; o1 < 1; o1++, i1 += 1) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 168; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 1)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 1)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_f24b878e18a (const float x[1][168][56][56],
                  const float w[448][168][1][1],
                  const float bias[448],
                  float       y[1][448][56][56])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 448; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 56; o0++, i0 += 1) {
				for (int32_t o1 = 0, i1 = 0; o1 < 56; o1++, i1 += 1) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 168; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 56)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 56)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_e98ea15dc69 (const float X[1][896][28][28],
                  float       Y[1][896][28][28])
{
	/* Sigmoid
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 896; i1++) {
			for (unsigned i2 = 0; i2 < 28; i2++) {
				for (unsigned i3 = 0; i3 < 28; i3++) {
					Y[i0][i1][i2][i3] = 1 / (1 + exp(-X[i0][i1][i2][i3]));
				}
			}
		}
	}
}

LIB_HIDDEN void
func_e5bf4246f71 (const float A[1][2016],
                  const float B[2016][4],
                  float       Y[1][4])
{
	/* MatMul */
	for (uint32_t r = 0; r < 1; r++)
		for (uint32_t c = 0; c < 4; c++) {
			Y[r][c] = 0;
			for (uint32_t i = 0; i < 2016; i++)
				Y[r][c] += A[r][i] * B[i][c];
		}
}

LIB_HIDDEN void
func_dbe8eb58c75 (const float X[1][2016][14][14],
                  float       Y[1][2016][14][14])
{
	/* Softplus
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 2016; i1++) {
			for (unsigned i2 = 0; i2 < 14; i2++) {
				for (unsigned i3 = 0; i3 < 14; i3++) {
					Y[i0][i1][i2][i3] = logf(exp(X[i0][i1][i2][i3]) + 1);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_d76e9ccfb30 (const float X[1][2016][14][14],
                  float       Y[1][2016][14][14])
{
	/* Sigmoid
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 2016; i1++) {
			for (unsigned i2 = 0; i2 < 14; i2++) {
				for (unsigned i3 = 0; i3 < 14; i3++) {
					Y[i0][i1][i2][i3] = 1 / (1 + exp(-X[i0][i1][i2][i3]));
				}
			}
		}
	}
}

LIB_HIDDEN void
func_d6ae3647f1b (const float A[1][168][112][112],
                  const float B[1][168][112][112],
                  float       C[1][168][112][112])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 168; i1++) {
			for (unsigned i2 = 0; i2 < 112; i2++) {
				for (unsigned i3 = 0; i3 < 112; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] * B[0][i1][i2][i3];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_d6a45ad4f82 (const float A[1][32][112][112],
                  const float B[1],
                  float       C[1][32][112][112])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 32; i1++) {
			for (unsigned i2 = 0; i2 < 112; i2++) {
				for (unsigned i3 = 0; i3 < 112; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] * B[0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_d61c9a21a5c (const float x[1][2016][7][7],
                  const float w[2016][2016][1][1],
                  const float bias[2016],
                  float       y[1][2016][7][7])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 2016; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 7; o0++, i0 += 1) {
				for (int32_t o1 = 0, i1 = 0; o1 < 7; o1++, i1 += 1) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 2016; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 7)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 7)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_ce6378ecf4f (const float x[1][2016][14][14],
                  const float w[2016][56][3][3],
                  const float bias[2016],
                  float       y[1][2016][7][7])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 36
	 * kernel_shape: 3 3
	 * pads: 1 1 1 1
	 * strides: 2 2
	 */
	for (uint32_t b = 0; b < 1; b++) {
		uint32_t go = 56; // output group size, i.e. maps/group
		uint32_t gi = 56; // inptput group size, i.e. channels/group
		for (uint32_t g = 0; g < 36; g++) {
			for (uint32_t m = go * g; m < go * (g + 1); m++) {
				for (int32_t o0 = 0, i0 = -1; o0 < 7; o0++, i0 += 2) {
					for (int32_t o1 = 0, i1 = -1; o1 < 7; o1++, i1 += 2) {
						y[b][m][o0][o1] = bias[m];
						for (int32_t c = gi * g; c < gi * (g + 1); c++) {
							for (uint32_t k0 = 0; k0 < 3; k0++) {
								for (uint32_t k1 = 0; k1 < 3; k1++) {
									int ii0 = i0 + k0 * 1;
									if (ii0 < 0)
										continue;
									if (ii0 >= 14)
										continue;
									int ii1 = i1 + k1 * 1;
									if (ii1 < 0)
										continue;
									if (ii1 >= 14)
										continue;
									y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c - (gi * g)][k0][k1];
								} /* k */
							}         /* k */
						}                 /* c */
					}                         /* o */
				}                                 /* o */
			}                                         /* m */
		}                                                 /* g */
	}                                                         /* b */
}

LIB_HIDDEN void
func_c6af25897cd (const float x[1][448][28][28],
                  const float w[896][448][1][1],
                  const float bias[896],
                  float       y[1][896][14][14])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 2 2
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 896; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 14; o0++, i0 += 2) {
				for (int32_t o1 = 0, i1 = 0; o1 < 14; o1++, i1 += 2) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 448; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 28)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 28)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_c686cecec96 (const float X[1][2016][14][14],
                  float       Y[1][2016][14][14])
{
	/* Tanh
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 2016; i1++) {
			for (unsigned i2 = 0; i2 < 14; i2++) {
				for (unsigned i3 = 0; i3 < 14; i3++) {
					Y[i0][i1][i2][i3] = tanhf(X[i0][i1][i2][i3]);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_c3376a8404c (const float input[1][4],
                  float       output[1][4])
{
	/* Softmax 13 (TF, pytorch style)
	 * axis = -1
	 */
	for (uint32_t i0 = 0; i0 < 1; i0++) {
		float max = -INFINITY;
		for (uint32_t i1 = 0; i1 < 4; i1++) {
			max = max > input[i0][i1] ? max : input[i0][i1];
		};
		float sum = 0.00000;
		for (uint32_t i1 = 0; i1 < 4; i1++) {
			sum += expf(input[i0][i1] - max);
		};
		for (uint32_t i1 = 0; i1 < 4; i1++) {
			output[i0][i1] = expf(input[i0][i1] - max) / sum;
		};
	}
}

LIB_HIDDEN void
func_c2fbc93cabe (const float A[1][2016][14][14],
                  const float B[1][2016][14][14],
                  float       C[1][2016][14][14])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 2016; i1++) {
			for (unsigned i2 = 0; i2 < 14; i2++) {
				for (unsigned i3 = 0; i3 < 14; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] * B[0][i1][i2][i3];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_c288fe43fe8 (const float x[1][168][56][56],
                  const float w[448][168][1][1],
                  const float bias[448],
                  float       y[1][448][28][28])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 2 2
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 448; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 28; o0++, i0 += 2) {
				for (int32_t o1 = 0, i1 = 0; o1 < 28; o1++, i1 += 2) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 168; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 56)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 56)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_bf5ddeae394 (const float x[1][112][1][1],
                  const float w[896][112][1][1],
                  const float bias[896],
                  float       y[1][896][1][1])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 896; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 1; o0++, i0 += 1) {
				for (int32_t o1 = 0, i1 = 0; o1 < 1; o1++, i1 += 1) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 112; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 1)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 1)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_bddbd765d81 (const float X[1][448][56][56],
                  float       Y[1][448][56][56])
{
	/* Softplus
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 448; i1++) {
			for (unsigned i2 = 0; i2 < 56; i2++) {
				for (unsigned i3 = 0; i3 < 56; i3++) {
					Y[i0][i1][i2][i3] = logf(exp(X[i0][i1][i2][i3]) + 1);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_bbf546ba220 (const float x[1][896][14][14],
                  const float w[2016][896][1][1],
                  const float bias[2016],
                  float       y[1][2016][7][7])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 2 2
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 2016; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 7; o0++, i0 += 2) {
				for (int32_t o1 = 0, i1 = 0; o1 < 7; o1++, i1 += 2) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 896; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 14)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 14)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_bb3233bbb31 (const float A[1][2016][14][14],
                  const float B[1],
                  float       C[1][2016][14][14])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 2016; i1++) {
			for (unsigned i2 = 0; i2 < 14; i2++) {
				for (unsigned i3 = 0; i3 < 14; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] * B[0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_b474dc19b0a (const float A[1][896][28][28],
                  const float B[1],
                  float       C[1][896][28][28])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 896; i1++) {
			for (unsigned i2 = 0; i2 < 28; i2++) {
				for (unsigned i3 = 0; i3 < 28; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] * B[0];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_ad146f9f484 (const float X[1][896][28][28],
                  float       Y[1][896][28][28])
{
	/* Softplus
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 896; i1++) {
			for (unsigned i2 = 0; i2 < 28; i2++) {
				for (unsigned i3 = 0; i3 < 28; i3++) {
					Y[i0][i1][i2][i3] = logf(exp(X[i0][i1][i2][i3]) + 1);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_aad79a6baee (const float X[1][896][28][28],
                  float       Y[1][896][28][28])
{
	/* Tanh
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 896; i1++) {
			for (unsigned i2 = 0; i2 < 28; i2++) {
				for (unsigned i3 = 0; i3 < 28; i3++) {
					Y[i0][i1][i2][i3] = tanhf(X[i0][i1][i2][i3]);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_a4ec7eed693 (const float A[1][4],
                  const float B[4],
                  float       C[1][4])
{
	/* Add
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 4; i1++) {
			C[i0][i1] = A[0][i1] + B[i1];
			;
		}
	}
}

LIB_HIDDEN void
func_a3aa399a41b (const float X[1][168][112][112],
                  float       Y[1][168][112][112])
{
	/* Tanh
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 168; i1++) {
			for (unsigned i2 = 0; i2 < 112; i2++) {
				for (unsigned i3 = 0; i3 < 112; i3++) {
					Y[i0][i1][i2][i3] = tanhf(X[i0][i1][i2][i3]);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_a0025ec8222 (const float X[1][32][112][112],
                  float       Y[1][32][112][112])
{
	/* Softplus
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 32; i1++) {
			for (unsigned i2 = 0; i2 < 112; i2++) {
				for (unsigned i3 = 0; i3 < 112; i3++) {
					Y[i0][i1][i2][i3] = logf(exp(X[i0][i1][i2][i3]) + 1);
				}
			}
		}
	}
}

LIB_HIDDEN void
func_9cf1befb936 (const float x[1][42][1][1],
                  const float w[168][42][1][1],
                  const float bias[168],
                  float       y[1][168][1][1])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 168; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 1; o0++, i0 += 1) {
				for (int32_t o1 = 0, i1 = 0; o1 < 1; o1++, i1 += 1) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 42; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 1)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 1)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_97b144c3b9a (const float X[1][168][112][112],
                  float       Y[1][168][112][112])
{
	/* Sigmoid
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 168; i1++) {
			for (unsigned i2 = 0; i2 < 112; i2++) {
				for (unsigned i3 = 0; i3 < 112; i3++) {
					Y[i0][i1][i2][i3] = 1 / (1 + exp(-X[i0][i1][i2][i3]));
				}
			}
		}
	}
}

LIB_HIDDEN void
func_97397a824fd (const float A[1][168][112][112],
                  const float B[1][168][112][112],
                  float       C[1][168][112][112])
{
	/* Add
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 168; i1++) {
			for (unsigned i2 = 0; i2 < 112; i2++) {
				for (unsigned i3 = 0; i3 < 112; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] + B[0][i1][i2][i3];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_9225134875f (const float x[1][896][14][14],
                  const float w[2016][896][1][1],
                  const float bias[2016],
                  float       y[1][2016][14][14])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 2016; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 14; o0++, i0 += 1) {
				for (int32_t o1 = 0, i1 = 0; o1 < 14; o1++, i1 += 1) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 896; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 14)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 14)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_8e2441e0d80 (const float x[1][896][28][28],
                  const float w[896][56][3][3],
                  const float bias[896],
                  float       y[1][896][14][14])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 16
	 * kernel_shape: 3 3
	 * pads: 1 1 1 1
	 * strides: 2 2
	 */
	for (uint32_t b = 0; b < 1; b++) {
		uint32_t go = 56; // output group size, i.e. maps/group
		uint32_t gi = 56; // inptput group size, i.e. channels/group
		for (uint32_t g = 0; g < 16; g++) {
			for (uint32_t m = go * g; m < go * (g + 1); m++) {
				for (int32_t o0 = 0, i0 = -1; o0 < 14; o0++, i0 += 2) {
					for (int32_t o1 = 0, i1 = -1; o1 < 14; o1++, i1 += 2) {
						y[b][m][o0][o1] = bias[m];
						for (int32_t c = gi * g; c < gi * (g + 1); c++) {
							for (uint32_t k0 = 0; k0 < 3; k0++) {
								for (uint32_t k1 = 0; k1 < 3; k1++) {
									int ii0 = i0 + k0 * 1;
									if (ii0 < 0)
										continue;
									if (ii0 >= 28)
										continue;
									int ii1 = i1 + k1 * 1;
									if (ii1 < 0)
										continue;
									if (ii1 >= 28)
										continue;
									y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c - (gi * g)][k0][k1];
								} /* k */
							}         /* k */
						}                 /* c */
					}                         /* o */
				}                                 /* o */
			}                                         /* m */
		}                                                 /* g */
	}                                                         /* b */
}

LIB_HIDDEN void
func_8d7ee594121 (const float x[1][448][28][28],
                  const float w[896][448][1][1],
                  const float bias[896],
                  float       y[1][896][28][28])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 896; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 28; o0++, i0 += 1) {
				for (int32_t o1 = 0, i1 = 0; o1 < 28; o1++, i1 += 1) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 448; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 28)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 28)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_8938578e140 (const float x[1][224][1][1],
                  const float w[2016][224][1][1],
                  const float bias[2016],
                  float       y[1][2016][1][1])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 2016; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 1; o0++, i0 += 1) {
				for (int32_t o1 = 0, i1 = 0; o1 < 1; o1++, i1 += 1) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 224; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 1)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 1)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_831ce77435a (const float x[1][896][1][1],
                  const float w[112][896][1][1],
                  const float bias[112],
                  float       y[1][112][1][1])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 112; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 1; o0++, i0 += 1) {
				for (int32_t o1 = 0, i1 = 0; o1 < 1; o1++, i1 += 1) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 896; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 1)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 1)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_804a22f193b (const float x[1][3][224][224],
                  const float w[32][3][3][3],
                  const float bias[32],
                  float       y[1][32][112][112])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 3 3
	 * pads: 1 1 1 1
	 * strides: 2 2
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 32; m++) {
			for (int32_t o0 = 0, i0 = -1; o0 < 112; o0++, i0 += 2) {
				for (int32_t o1 = 0, i1 = -1; o1 < 112; o1++, i1 += 2) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 3; c++) {
						for (uint32_t k0 = 0; k0 < 3; k0++) {
							for (uint32_t k1 = 0; k1 < 3; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 224)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 224)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_7672188cb32 (const float x[1][168][112][112],
                  const float w[168][56][3][3],
                  const float bias[168],
                  float       y[1][168][56][56])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 3
	 * kernel_shape: 3 3
	 * pads: 1 1 1 1
	 * strides: 2 2
	 */
	for (uint32_t b = 0; b < 1; b++) {
		uint32_t go = 56; // output group size, i.e. maps/group
		uint32_t gi = 56; // inptput group size, i.e. channels/group
		for (uint32_t g = 0; g < 3; g++) {
			for (uint32_t m = go * g; m < go * (g + 1); m++) {
				for (int32_t o0 = 0, i0 = -1; o0 < 56; o0++, i0 += 2) {
					for (int32_t o1 = 0, i1 = -1; o1 < 56; o1++, i1 += 2) {
						y[b][m][o0][o1] = bias[m];
						for (int32_t c = gi * g; c < gi * (g + 1); c++) {
							for (uint32_t k0 = 0; k0 < 3; k0++) {
								for (uint32_t k1 = 0; k1 < 3; k1++) {
									int ii0 = i0 + k0 * 1;
									if (ii0 < 0)
										continue;
									if (ii0 >= 112)
										continue;
									int ii1 = i1 + k1 * 1;
									if (ii1 < 0)
										continue;
									if (ii1 >= 112)
										continue;
									y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c - (gi * g)][k0][k1];
								} /* k */
							}         /* k */
						}                 /* c */
					}                         /* o */
				}                                 /* o */
			}                                         /* m */
		}                                                 /* g */
	}                                                         /* b */
}

LIB_HIDDEN void
func_74f52a68cb0 (const float X[1][32][112][112],
                  float       Y[1][32][112][112])
{
	/* Sigmoid
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 32; i1++) {
			for (unsigned i2 = 0; i2 < 112; i2++) {
				for (unsigned i3 = 0; i3 < 112; i3++) {
					Y[i0][i1][i2][i3] = 1 / (1 + exp(-X[i0][i1][i2][i3]));
				}
			}
		}
	}
}

LIB_HIDDEN void
func_743ae64fdb9 (const float X[1][448][56][56],
                  float       Y[1][448][56][56])
{
	/* Sigmoid
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 448; i1++) {
			for (unsigned i2 = 0; i2 < 56; i2++) {
				for (unsigned i3 = 0; i3 < 56; i3++) {
					Y[i0][i1][i2][i3] = 1 / (1 + exp(-X[i0][i1][i2][i3]));
				}
			}
		}
	}
}

LIB_HIDDEN void
func_6ba9e121261 (const float x[1][42][1][1],
                  const float w[448][42][1][1],
                  const float bias[448],
                  float       y[1][448][1][1])
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1
	 * group: 1
	 * kernel_shape: 1 1
	 * pads: 0 0 0 0
	 * strides: 1 1
	 */
	for (uint32_t b = 0; b < 1; b++) {
		for (uint32_t m = 0; m < 448; m++) {
			for (int32_t o0 = 0, i0 = 0; o0 < 1; o0++, i0 += 1) {
				for (int32_t o1 = 0, i1 = 0; o1 < 1; o1++, i1 += 1) {
					y[b][m][o0][o1] = bias[m];
					for (int32_t c = 0; c < 42; c++) {
						for (uint32_t k0 = 0; k0 < 1; k0++) {
							for (uint32_t k1 = 0; k1 < 1; k1++) {
								int ii0 = i0 + k0 * 1;
								if (ii0 < 0)
									continue;
								if (ii0 >= 1)
									continue;
								int ii1 = i1 + k1 * 1;
								if (ii1 < 0)
									continue;
								if (ii1 >= 1)
									continue;
								y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
							} /* k */
						}         /* k */
					}                 /* c */
				}                         /* o */
			}                                 /* o */
		}                                         /* m */
	}                                                 /* b */
}

LIB_HIDDEN void
func_6a61f6e44a9 (const float X[1][2016][1][1],
                  float       Y[1][2016][1][1])
{
	/* Sigmoid
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 2016; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					Y[i0][i1][i2][i3] = 1 / (1 + exp(-X[i0][i1][i2][i3]));
				}
			}
		}
	}
}

LIB_HIDDEN void
func_672295ba075 (const float A[1][2016][14][14],
                  const float B[1][2016][14][14],
                  float       C[1][2016][14][14])
{
	/* Add
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 2016; i1++) {
			for (unsigned i2 = 0; i2 < 14; i2++) {
				for (unsigned i3 = 0; i3 < 14; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] + B[0][i1][i2][i3];
					;
				}
			}
		}
	}
}

LIB_HIDDEN void
func_6500efa9237 (const float X[1][448][56][56],
                  float       Y[1][448][56][56])
{
	/* Tanh
	   alpha = 0.00000
	   beta = 0.00000
	*/
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 448; i1++) {
			for (unsigned i2 = 0; i2 < 56; i2++) {
				for (unsigned i3 = 0; i3 < 56; i3++) {
					Y[i0][i1][i2][i3] = tanhf(X[i0][i1][i2][i3]);
				}
			}
		}
	}
}
