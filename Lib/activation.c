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
