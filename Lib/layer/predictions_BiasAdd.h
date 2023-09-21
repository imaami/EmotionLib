static inline void
layer_moreNet_predictions_BiasAdd (const float A[1][4], const float B[4], float C[1][4])
{
	/* Add
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0 = 0; i0 < 1; i0++) {
		for (unsigned i1 = 0; i1 < 4; i1++) {
			C[i0][i1] = A[0][i1] + B[i1];
			;
		}
	}
}
