static inline void
layer_moreNet_stem_more_activation_truediv (const float A[1][32][112][112], const float B[1], float C[1][32][112][112])
{
	/* Mul
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 32; i1++) {
			for (unsigned i2 = 0; i2 < 112; i2++) {
				for (unsigned i3 = 0; i3 < 112; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] * B[0];
					;
				}
			}
		}
	}
}
