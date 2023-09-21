static inline void
layer_moreNet_stack3_block6_deep_2_se_sigmoid_Sigmoid (const float X[1][896][1][1], float Y[1][896][1][1])
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
