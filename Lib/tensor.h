#ifndef TENSOR_H_
#define TENSOR_H_

#include "common.h"

struct tensors;

LIB_HIDDEN extern struct tensors *
tensors_create (int *error);

LIB_HIDDEN extern void
tensors_destroy (struct tensors **pp);

union tensor_union_0 {
	float tensor_1_3_224_224[1][3][224][224];
	float tensor_1_32_112_112[1][32][112][112];
	float tensor_1_168_56_56[1][168][56][56];
	float tensor_1_168_1_1[1][168][1][1];
	float tensor_1_42_1_1[1][42][1][1];
	float tensor_1_448_56_56[1][448][56][56];
	float tensor_1_448_28_28[1][448][28][28];
	float tensor_1_448_1_1[1][448][1][1];
	float tensor_1_112_1_1[1][112][1][1];
	float tensor_1_896_28_28[1][896][28][28];
	float tensor_1_896_14_14[1][896][14][14];
	float tensor_1_896_1_1[1][896][1][1];
	float tensor_1_224_1_1[1][224][1][1];
	float tensor_1_2016_14_14[1][2016][14][14];
	float tensor_1_2016_7_7[1][2016][7][7];
	float tensor_1_2016_1_1[1][2016][1][1];
	float tensor_1_4[1][4];
};

union tensor_union_1 {
	float tensor_1_32_112_112[1][32][112][112];
	float tensor_1_168_112_112[1][168][112][112];
	float tensor_1_168_56_56[1][168][56][56];
	float tensor_1_448_28_28[1][448][28][28];
	float tensor_1_448_1_1[1][448][1][1];
	float tensor_1_112_1_1[1][112][1][1];
	float tensor_1_896_14_14[1][896][14][14];
	float tensor_1_896_1_1[1][896][1][1];
	float tensor_1_224_1_1[1][224][1][1];
	float tensor_1_2016_7_7[1][2016][7][7];
	float tensor_1_2016[1][2016];
	float tensor_1_4[1][4];
};

union tensor_union_2 {
	float tensor_1_32_112_112[1][32][112][112];
	float tensor_1_168_112_112[1][168][112][112];
	float tensor_1_168_56_56[1][168][56][56];
	float tensor_1_168_1_1[1][168][1][1];
	float tensor_1_8_1_1[1][8][1][1];
	float tensor_1_448_56_56[1][448][56][56];
	float tensor_1_448_28_28[1][448][28][28];
	float tensor_1_448_1_1[1][448][1][1];
	float tensor_1_42_1_1[1][42][1][1];
	float tensor_1_896_28_28[1][896][28][28];
	float tensor_1_896_14_14[1][896][14][14];
	float tensor_1_896_1_1[1][896][1][1];
	float tensor_1_112_1_1[1][112][1][1];
	float tensor_1_2016_14_14[1][2016][14][14];
	float tensor_1_2016_7_7[1][2016][7][7];
	float tensor_1_2016_1_1[1][2016][1][1];
	float tensor_1_224_1_1[1][224][1][1];
};

union tensor_union_3 {
	float tensor_1_168_112_112[1][168][112][112];
	float tensor_1_168_56_56[1][168][56][56];
	float tensor_1_8_1_1[1][8][1][1];
	float tensor_1_168_1_1[1][168][1][1];
	float tensor_1_42_1_1[1][42][1][1];
	float tensor_1_448_56_56[1][448][56][56];
	float tensor_1_448_28_28[1][448][28][28];
	float tensor_1_448_1_1[1][448][1][1];
	float tensor_1_112_1_1[1][112][1][1];
	float tensor_1_896_28_28[1][896][28][28];
	float tensor_1_896_14_14[1][896][14][14];
	float tensor_1_896_1_1[1][896][1][1];
	float tensor_1_224_1_1[1][224][1][1];
	float tensor_1_2016_14_14[1][2016][14][14];
	float tensor_1_2016_7_7[1][2016][7][7];
	float tensor_1_2016_1_1[1][2016][1][1];
};

union tensor_union_4 {
	float tensor_1_8_1_1[1][8][1][1];
	float tensor_1_42_1_1[1][42][1][1];
	float tensor_1_112_1_1[1][112][1][1];
	float tensor_1_224_1_1[1][224][1][1];
};

struct tensors {
	union tensor_union_0 tu0;
	union tensor_union_1 tu1;
	union tensor_union_2 tu2;
	union tensor_union_3 tu3;
	union tensor_union_4 tu4;
};

#endif // TENSOR_H_
