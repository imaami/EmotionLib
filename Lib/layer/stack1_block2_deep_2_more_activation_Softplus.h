static inline void
layer_moreNet_stack1_block2_deep_2_more_activation_Softplus (const float X[1][168][56][56], float Y[1][168][56][56])
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
