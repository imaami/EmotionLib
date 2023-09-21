static inline void
layer_moreNet_stack1_block1_deep_2_se_more_activation_mul (const float A[1][8][1][1], const float B[1][8][1][1], float C[1][8][1][1])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 8; i1++) {
			for (unsigned i2 = 0; i2 < 1; i2++) {
				for (unsigned i3 = 0; i3 < 1; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][0][0] * B[0][i1][0][0];
					;
				}
			}
		}
	}
}
