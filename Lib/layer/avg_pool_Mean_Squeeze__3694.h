static inline void
layer_moreNet_avg_pool_Mean_Squeeze__3694 (const float input[1][2016][1][1], const int64_t axes_tensor[2], float output[1][2016])
{
	/*Squeeze*/
	float *data     = (float *)input;
	float *squeezed = (float *)output;
	for (uint32_t i = 0; i < 2016; i++)
		squeezed[i] = data[i];
}
