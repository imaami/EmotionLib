static inline void
layer_moreNet_stack2_block3_deep_1_more_activation_Tanh (const float X[1][448][28][28], float Y[1][448][28][28])
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
