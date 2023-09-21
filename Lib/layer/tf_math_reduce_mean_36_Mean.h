static inline void
layer_moreNet_tf_math_reduce_mean_36_Mean (const float input[1][448][28][28], float output[1][448][1][1])
{
	/* GlobalAveragePool */
	for (int32_t b = 0; b < 1; b++) {
		for (int32_t c = 0; c < 448; c++) {
			float dimsum = 0.00000f;
			for (int32_t d0 = 0; d0 < 28; d0++) {
				for (int32_t d1 = 0; d1 < 28; d1++) {
					dimsum += input[b][c][d0][d1];
				}
			}
			output[b][c][0][0] = dimsum / 784;
		}
	}
}
