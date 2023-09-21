static inline void
layer_moreNet_predictions_MatMul (const float A[1][2016], const float B[2016][4], float Y[1][4])
{
	/* MatMul */
	for (uint32_t r = 0; r < 1; r++)
		for (uint32_t c = 0; c < 4; c++) {
			Y[r][c] = 0;
			for (uint32_t i = 0; i < 2016; i++)
				Y[r][c] += A[r][i] * B[i][c];
		}
}
