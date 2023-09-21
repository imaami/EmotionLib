static inline void
layer_moreNet_avg_pool_Mean (const float input[1][2016][7][7], float output[1][2016][1][1])
{
	/* GlobalAveragePool */
	for (int32_t b = 0; b < 1; b++) {
		for (int32_t c = 0; c < 2016; c++) {
			float dimsum = 0.00000f;
			for (int32_t d0 = 0; d0 < 7; d0++) {
				for (int32_t d1 = 0; d1 < 7; d1++) {
					dimsum += input[b][c][d0][d1];
				}
			}
			output[b][c][0][0] = dimsum / 49;
		}
	}
}
