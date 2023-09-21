static inline void
layer_moreNet_stack3_block1_deep_1_more_activation_Softplus (const float X[1][896][28][28], float Y[1][896][28][28])
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
