static inline void
layer_moreNet_stack4_block1_deep_1_more_activation_Sigmoid (const float X[1][2016][14][14], float Y[1][2016][14][14])
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
