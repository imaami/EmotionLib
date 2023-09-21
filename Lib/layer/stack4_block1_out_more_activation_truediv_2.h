static inline void
layer_moreNet_stack4_block1_out_more_activation_truediv_2 (const float A[1][2016][7][7], const float B[1], float C[1][2016][7][7])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 2016; i1++) {
			for (unsigned i2 = 0; i2 < 7; i2++) {
				for (unsigned i3 = 0; i3 < 7; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] * B[0];
					;
				}
			}
		}
	}
}
