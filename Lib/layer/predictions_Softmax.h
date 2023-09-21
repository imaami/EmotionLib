static inline void
layer_moreNet_predictions_Softmax (const float input[1][4], float output[1][4])
{
	/* Softmax 13 (TF, pytorch style)
	 * axis = -1
	 */
	for (uint32_t i0 = 0; i0 < 1; i0++) {
		float max = -INFINITY;
		for (uint32_t i1 = 0; i1 < 4; i1++) {
			max = max > input[i0][i1] ? max : input[i0][i1];
		};
		float sum = 0.00000;
		for (uint32_t i1 = 0; i1 < 4; i1++) {
			sum += expf(input[i0][i1] - max);
		};
		for (uint32_t i1 = 0; i1 < 4; i1++) {
			output[i0][i1] = expf(input[i0][i1] - max) / sum;
		};
	}
}
