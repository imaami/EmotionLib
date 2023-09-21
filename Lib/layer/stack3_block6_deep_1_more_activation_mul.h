static inline void
layer_moreNet_stack3_block6_deep_1_more_activation_mul (const float A[1][896][14][14], const float B[1][896][14][14], float C[1][896][14][14])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 896; i1++) {
			for (unsigned i2 = 0; i2 < 14; i2++) {
				for (unsigned i3 = 0; i3 < 14; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] * B[0][i1][i2][i3];
					;
				}
			}
		}
	}
}
