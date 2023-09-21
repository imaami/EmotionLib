static inline void
layer_moreNet_stack1_block2_add_add (const float A[1][168][56][56], const float B[1][168][56][56], float C[1][168][56][56])
{
	/* Add
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 168; i1++) {
			for (unsigned i2 = 0; i2 < 56; i2++) {
				for (unsigned i3 = 0; i3 < 56; i3++) {
					C[i0][i1][i2][i3] = A[0][i1][i2][i3] + B[0][i1][i2][i3];
					;
				}
			}
		}
	}
}
