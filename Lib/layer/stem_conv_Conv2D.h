static inline void
layer_moreNet_stem_conv_Conv2D (const float x[1][3][224][224], const float w[32][3][3][3], const float bias[32], float y[1][32][112][112])
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
