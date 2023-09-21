static inline void
layer_moreNet_stack2_block4_deep_1_conv_Conv2D (const float x[1][448][28][28], const float w[448][448][1][1], const float bias[448], float y[1][448][28][28])
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
