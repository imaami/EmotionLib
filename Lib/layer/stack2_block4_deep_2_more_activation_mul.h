static inline void
layer_moreNet_stack2_block4_deep_2_more_activation_mul (const float A[1][448][28][28], const float B[1][448][28][28], float C[1][448][28][28])
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
