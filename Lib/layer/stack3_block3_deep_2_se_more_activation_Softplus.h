static inline void
layer_moreNet_stack3_block3_deep_2_se_more_activation_Softplus (const float X[1][224][1][1], float Y[1][224][1][1])
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
