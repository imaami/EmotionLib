#ifndef LAYER_H_
#define LAYER_H_

#include <math.h>
#include <stdint.h>

#include "layer/stem_conv_Conv2D.h"
#include "layer/stem_more_activation_truediv.h"
#include "layer/stem_more_activation_Softplus.h"
#include "layer/stem_more_activation_add.h"
#include "layer/stem_more_activation_Tanh.h"
#include "layer/stem_more_activation_Sigmoid.h"
#include "layer/stem_more_activation_mul.h"
#include "layer/stack1_block1_shortcut_conv_Conv2D.h"
#include "layer/stack1_block1_deep_1_conv_Conv2D.h"
#include "layer/stack1_block1_deep_1_more_activation_truediv_1.h"
#include "layer/stack1_block1_deep_1_more_activation_Softplus.h"
#include "layer/stack1_block1_deep_1_more_activation_add.h"
#include "layer/stack1_block1_deep_1_more_activation_Tanh.h"
#include "layer/stack1_block1_deep_1_more_activation_Sigmoid.h"
#include "layer/stack1_block1_deep_1_more_activation_mul.h"
#include "layer/stack1_block1_deep_2_GC_conv_Conv2D.h"
#include "layer/stack1_block1_deep_2_more_activation_truediv_2.h"
#include "layer/stack1_block1_deep_2_more_activation_Softplus.h"
#include "layer/stack1_block1_deep_2_more_activation_add.h"
#include "layer/stack1_block1_deep_2_more_activation_Tanh.h"
#include "layer/stack1_block1_deep_2_more_activation_Sigmoid.h"
#include "layer/stack1_block1_deep_2_more_activation_mul.h"
#include "layer/tf_math_reduce_mean_34_Mean.h"
#include "layer/stack1_block1_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack1_block1_deep_2_se_more_activation_truediv_2.h"
#include "layer/stack1_block1_deep_2_se_more_activation_Softplus.h"
#include "layer/stack1_block1_deep_2_se_more_activation_add.h"
#include "layer/stack1_block1_deep_2_se_more_activation_Tanh.h"
#include "layer/stack1_block1_deep_2_se_more_activation_Sigmoid.h"
#include "layer/stack1_block1_deep_2_se_more_activation_mul.h"
#include "layer/stack1_block1_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack1_block1_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack1_block1_deep_2_se_out_mul.h"
#include "layer/stack1_block1_deep_3_conv_Conv2D.h"
#include "layer/stack1_block1_add_add.h"
#include "layer/stack1_block1_out_more_activation_truediv_2.h"
#include "layer/stack1_block1_out_more_activation_Softplus.h"
#include "layer/stack1_block1_out_more_activation_add.h"
#include "layer/stack1_block1_out_more_activation_Tanh.h"
#include "layer/stack1_block1_out_more_activation_Sigmoid.h"
#include "layer/stack1_block1_out_more_activation_mul.h"
#include "layer/stack1_block2_deep_1_conv_Conv2D.h"
#include "layer/stack1_block2_deep_1_more_activation_truediv_2.h"
#include "layer/stack1_block2_deep_1_more_activation_Softplus.h"
#include "layer/stack1_block2_deep_1_more_activation_add.h"
#include "layer/stack1_block2_deep_1_more_activation_Tanh.h"
#include "layer/stack1_block2_deep_1_more_activation_Sigmoid.h"
#include "layer/stack1_block2_deep_1_more_activation_mul.h"
#include "layer/stack1_block2_deep_2_GC_conv_Conv2D.h"
#include "layer/stack1_block2_deep_2_more_activation_truediv_1.h"
#include "layer/stack1_block2_deep_2_more_activation_Softplus.h"
#include "layer/stack1_block2_deep_2_more_activation_add.h"
#include "layer/stack1_block2_deep_2_more_activation_Tanh.h"
#include "layer/stack1_block2_deep_2_more_activation_Sigmoid.h"
#include "layer/stack1_block2_deep_2_more_activation_mul.h"
#include "layer/tf_math_reduce_mean_35_Mean.h"
#include "layer/stack1_block2_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack1_block2_deep_2_se_more_activation_truediv_2.h"
#include "layer/stack1_block2_deep_2_se_more_activation_Softplus.h"
#include "layer/stack1_block2_deep_2_se_more_activation_add.h"
#include "layer/stack1_block2_deep_2_se_more_activation_Tanh.h"
#include "layer/stack1_block2_deep_2_se_more_activation_Sigmoid.h"
#include "layer/stack1_block2_deep_2_se_more_activation_mul.h"
#include "layer/stack1_block2_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack1_block2_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack1_block2_deep_2_se_out_mul.h"
#include "layer/stack1_block2_deep_3_conv_Conv2D.h"
#include "layer/stack1_block2_add_add.h"
#include "layer/stack1_block2_out_more_activation_truediv_2.h"
#include "layer/stack1_block2_out_more_activation_Softplus.h"
#include "layer/stack1_block2_out_more_activation_add.h"
#include "layer/stack1_block2_out_more_activation_Tanh.h"
#include "layer/stack1_block2_out_more_activation_Sigmoid.h"
#include "layer/stack1_block2_out_more_activation_mul.h"
#include "layer/stack2_block1_shortcut_conv_Conv2D.h"
#include "layer/stack2_block1_deep_1_conv_Conv2D.h"
#include "layer/stack2_block1_deep_1_more_activation_truediv.h"
#include "layer/stack2_block1_deep_1_more_activation_Softplus.h"
#include "layer/stack2_block1_deep_1_more_activation_add.h"
#include "layer/stack2_block1_deep_1_more_activation_Tanh.h"
#include "layer/stack2_block1_deep_1_more_activation_Sigmoid.h"
#include "layer/stack2_block1_deep_1_more_activation_mul.h"
#include "layer/stack2_block1_deep_2_GC_conv_Conv2D.h"
#include "layer/stack2_block1_deep_2_more_activation_truediv_2.h"
#include "layer/stack2_block1_deep_2_more_activation_Softplus.h"
#include "layer/stack2_block1_deep_2_more_activation_Tanh.h"
#include "layer/stack2_block1_deep_2_more_activation_Sigmoid.h"
#include "layer/stack2_block1_deep_2_more_activation_mul.h"
#include "layer/tf_math_reduce_mean_36_Mean.h"
#include "layer/stack2_block1_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack2_block1_deep_2_se_more_activation_truediv_2.h"
#include "layer/stack2_block1_deep_2_se_more_activation_Softplus.h"
#include "layer/stack2_block1_deep_2_se_more_activation_add.h"
#include "layer/stack2_block1_deep_2_se_more_activation_Tanh.h"
#include "layer/stack2_block1_deep_2_se_more_activation_Sigmoid.h"
#include "layer/stack2_block1_deep_2_se_more_activation_mul.h"
#include "layer/stack2_block1_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack2_block1_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack2_block1_deep_2_se_out_mul.h"
#include "layer/stack2_block1_deep_3_conv_Conv2D.h"
#include "layer/stack2_block1_out_more_activation_truediv.h"
#include "layer/stack2_block1_out_more_activation_Softplus.h"
#include "layer/stack2_block1_out_more_activation_Tanh.h"
#include "layer/stack2_block1_out_more_activation_Sigmoid.h"
#include "layer/stack2_block1_out_more_activation_mul.h"
#include "layer/stack2_block2_deep_1_conv_Conv2D.h"
#include "layer/stack2_block2_deep_1_more_activation_truediv_2.h"
#include "layer/stack2_block2_deep_1_more_activation_Softplus.h"
#include "layer/stack2_block2_deep_1_more_activation_Tanh.h"
#include "layer/stack2_block2_deep_1_more_activation_Sigmoid.h"
#include "layer/stack2_block2_deep_1_more_activation_mul.h"
#include "layer/stack2_block2_deep_2_GC_conv_Conv2D.h"
#include "layer/stack2_block2_deep_2_more_activation_truediv.h"
#include "layer/stack2_block2_deep_2_more_activation_Softplus.h"
#include "layer/stack2_block2_deep_2_more_activation_Tanh.h"
#include "layer/stack2_block2_deep_2_more_activation_Sigmoid.h"
#include "layer/stack2_block2_deep_2_more_activation_mul.h"
#include "layer/tf_math_reduce_mean_37_Mean.h"
#include "layer/stack2_block2_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack2_block2_deep_2_se_more_activation_truediv_1.h"
#include "layer/stack2_block2_deep_2_se_more_activation_Softplus.h"
#include "layer/stack2_block2_deep_2_se_more_activation_add.h"
#include "layer/stack2_block2_deep_2_se_more_activation_Tanh.h"
#include "layer/stack2_block2_deep_2_se_more_activation_Sigmoid.h"
#include "layer/stack2_block2_deep_2_se_more_activation_mul.h"
#include "layer/stack2_block2_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack2_block2_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack2_block2_deep_2_se_out_mul.h"
#include "layer/stack2_block2_deep_3_conv_Conv2D.h"
#include "layer/stack2_block2_out_more_activation_truediv.h"
#include "layer/stack2_block2_out_more_activation_Softplus.h"
#include "layer/stack2_block2_out_more_activation_Tanh.h"
#include "layer/stack2_block2_out_more_activation_Sigmoid.h"
#include "layer/stack2_block2_out_more_activation_mul.h"
#include "layer/stack2_block3_deep_1_conv_Conv2D.h"
#include "layer/stack2_block3_deep_1_more_activation_truediv_2.h"
#include "layer/stack2_block3_deep_1_more_activation_Softplus.h"
#include "layer/stack2_block3_deep_1_more_activation_Tanh.h"
#include "layer/stack2_block3_deep_1_more_activation_Sigmoid.h"
#include "layer/stack2_block3_deep_1_more_activation_mul.h"
#include "layer/stack2_block3_deep_2_GC_conv_Conv2D.h"
#include "layer/stack2_block3_deep_2_more_activation_truediv.h"
#include "layer/stack2_block3_deep_2_more_activation_Softplus.h"
#include "layer/stack2_block3_deep_2_more_activation_Tanh.h"
#include "layer/stack2_block3_deep_2_more_activation_Sigmoid.h"
#include "layer/stack2_block3_deep_2_more_activation_mul.h"
#include "layer/tf_math_reduce_mean_38_Mean.h"
#include "layer/stack2_block3_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack2_block3_deep_2_se_more_activation_truediv_2.h"
#include "layer/stack2_block3_deep_2_se_more_activation_Softplus.h"
#include "layer/stack2_block3_deep_2_se_more_activation_add.h"
#include "layer/stack2_block3_deep_2_se_more_activation_Tanh.h"
#include "layer/stack2_block3_deep_2_se_more_activation_Sigmoid.h"
#include "layer/stack2_block3_deep_2_se_more_activation_mul.h"
#include "layer/stack2_block3_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack2_block3_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack2_block3_deep_2_se_out_mul.h"
#include "layer/stack2_block3_deep_3_conv_Conv2D.h"
#include "layer/stack2_block3_out_more_activation_truediv.h"
#include "layer/stack2_block3_out_more_activation_Softplus.h"
#include "layer/stack2_block3_out_more_activation_Tanh.h"
#include "layer/stack2_block3_out_more_activation_Sigmoid.h"
#include "layer/stack2_block3_out_more_activation_mul.h"
#include "layer/stack2_block4_deep_1_conv_Conv2D.h"
#include "layer/stack2_block4_deep_1_more_activation_truediv_2.h"
#include "layer/stack2_block4_deep_1_more_activation_Softplus.h"
#include "layer/stack2_block4_deep_1_more_activation_Tanh.h"
#include "layer/stack2_block4_deep_1_more_activation_Sigmoid.h"
#include "layer/stack2_block4_deep_1_more_activation_mul.h"
#include "layer/stack2_block4_deep_2_GC_conv_Conv2D.h"
#include "layer/stack2_block4_deep_2_more_activation_truediv_2.h"
#include "layer/stack2_block4_deep_2_more_activation_Softplus.h"
#include "layer/stack2_block4_deep_2_more_activation_Tanh.h"
#include "layer/stack2_block4_deep_2_more_activation_Sigmoid.h"
#include "layer/stack2_block4_deep_2_more_activation_mul.h"
#include "layer/tf_math_reduce_mean_39_Mean.h"
#include "layer/stack2_block4_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack2_block4_deep_2_se_more_activation_truediv_2.h"
#include "layer/stack2_block4_deep_2_se_more_activation_Softplus.h"
#include "layer/stack2_block4_deep_2_se_more_activation_add.h"
#include "layer/stack2_block4_deep_2_se_more_activation_Tanh.h"
#include "layer/stack2_block4_deep_2_se_more_activation_Sigmoid.h"
#include "layer/stack2_block4_deep_2_se_more_activation_mul.h"
#include "layer/stack2_block4_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack2_block4_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack2_block4_deep_2_se_out_mul.h"
#include "layer/stack2_block4_deep_3_conv_Conv2D.h"
#include "layer/stack2_block4_out_more_activation_truediv.h"
#include "layer/stack2_block4_out_more_activation_Softplus.h"
#include "layer/stack2_block4_out_more_activation_Tanh.h"
#include "layer/stack2_block4_out_more_activation_Sigmoid.h"
#include "layer/stack2_block4_out_more_activation_mul.h"
#include "layer/stack3_block1_shortcut_conv_Conv2D.h"
#include "layer/stack3_block1_deep_1_conv_Conv2D.h"
#include "layer/stack3_block1_deep_1_more_activation_truediv.h"
#include "layer/stack3_block1_deep_1_more_activation_Softplus.h"
#include "layer/stack3_block1_deep_1_more_activation_add.h"
#include "layer/stack3_block1_deep_1_more_activation_Tanh.h"
#include "layer/stack3_block1_deep_1_more_activation_Sigmoid.h"
#include "layer/stack3_block1_deep_1_more_activation_mul.h"
#include "layer/stack3_block1_deep_2_GC_conv_Conv2D.h"
#include "layer/tf_math_reduce_mean_40_Mean.h"
#include "layer/stack3_block1_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack3_block1_deep_2_se_more_activation_truediv_2.h"
#include "layer/stack3_block1_deep_2_se_more_activation_Softplus.h"
#include "layer/stack3_block1_deep_2_se_more_activation_add.h"
#include "layer/stack3_block1_deep_2_se_more_activation_Tanh.h"
#include "layer/stack3_block1_deep_2_se_more_activation_Sigmoid.h"
#include "layer/stack3_block1_deep_2_se_more_activation_mul.h"
#include "layer/stack3_block1_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack3_block1_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack3_block1_deep_2_se_out_mul.h"
#include "layer/stack3_block2_deep_2_GC_conv_Conv2D.h"
#include "layer/tf_math_reduce_mean_41_Mean.h"
#include "layer/stack3_block2_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack3_block2_deep_2_se_more_activation_truediv_2.h"
#include "layer/stack3_block2_deep_2_se_more_activation_Softplus.h"
#include "layer/stack3_block2_deep_2_se_more_activation_add.h"
#include "layer/stack3_block2_deep_2_se_more_activation_Tanh.h"
#include "layer/stack3_block2_deep_2_se_more_activation_Sigmoid.h"
#include "layer/stack3_block2_deep_2_se_more_activation_mul.h"
#include "layer/stack3_block2_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack3_block2_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack3_block2_deep_2_se_out_mul.h"
#include "layer/stack3_block3_deep_2_GC_conv_Conv2D.h"
#include "layer/tf_math_reduce_mean_42_Mean.h"
#include "layer/stack3_block3_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack3_block3_deep_2_se_more_activation_truediv.h"
#include "layer/stack3_block3_deep_2_se_more_activation_Softplus.h"
#include "layer/stack3_block3_deep_2_se_more_activation_add.h"
#include "layer/stack3_block3_deep_2_se_more_activation_Tanh.h"
#include "layer/stack3_block3_deep_2_se_more_activation_Sigmoid.h"
#include "layer/stack3_block3_deep_2_se_more_activation_mul.h"
#include "layer/stack3_block3_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack3_block3_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack3_block3_deep_2_se_out_mul.h"
#include "layer/stack3_block4_deep_2_GC_conv_Conv2D.h"
#include "layer/tf_math_reduce_mean_43_Mean.h"
#include "layer/stack3_block4_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack3_block4_deep_2_se_more_activation_truediv_2.h"
#include "layer/stack3_block4_deep_2_se_more_activation_Softplus.h"
#include "layer/stack3_block4_deep_2_se_more_activation_add.h"
#include "layer/stack3_block4_deep_2_se_more_activation_Tanh.h"
#include "layer/stack3_block4_deep_2_se_more_activation_Sigmoid.h"
#include "layer/stack3_block4_deep_2_se_more_activation_mul.h"
#include "layer/stack3_block4_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack3_block4_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack3_block4_deep_2_se_out_mul.h"
#include "layer/stack3_block5_deep_2_GC_conv_Conv2D.h"
#include "layer/tf_math_reduce_mean_44_Mean.h"
#include "layer/stack3_block5_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack3_block5_deep_2_se_more_activation_truediv_1.h"
#include "layer/stack3_block5_deep_2_se_more_activation_Softplus.h"
#include "layer/stack3_block5_deep_2_se_more_activation_add.h"
#include "layer/stack3_block5_deep_2_se_more_activation_Tanh.h"
#include "layer/stack3_block5_deep_2_se_more_activation_Sigmoid.h"
#include "layer/stack3_block5_deep_2_se_more_activation_mul.h"
#include "layer/stack3_block5_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack3_block5_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack3_block5_deep_2_se_out_mul.h"
#include "layer/stack3_block6_deep_2_GC_conv_Conv2D.h"
#include "layer/tf_math_reduce_mean_45_Mean.h"
#include "layer/stack3_block6_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack3_block6_deep_2_se_more_activation_truediv_2.h"
#include "layer/stack3_block6_deep_2_se_more_activation_Softplus.h"
#include "layer/stack3_block6_deep_2_se_more_activation_add.h"
#include "layer/stack3_block6_deep_2_se_more_activation_Tanh.h"
#include "layer/stack3_block6_deep_2_se_more_activation_Sigmoid.h"
#include "layer/stack3_block6_deep_2_se_more_activation_mul.h"
#include "layer/stack3_block6_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack3_block6_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack3_block6_deep_2_se_out_mul.h"
#include "layer/stack3_block7_deep_2_GC_conv_Conv2D.h"
#include "layer/tf_math_reduce_mean_46_Mean.h"
#include "layer/stack3_block7_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack3_block7_deep_2_se_more_activation_truediv_2.h"
#include "layer/stack3_block7_deep_2_se_more_activation_Softplus.h"
#include "layer/stack3_block7_deep_2_se_more_activation_add.h"
#include "layer/stack3_block7_deep_2_se_more_activation_Tanh.h"
#include "layer/stack3_block7_deep_2_se_more_activation_Sigmoid.h"
#include "layer/stack3_block7_deep_2_se_more_activation_mul.h"
#include "layer/stack3_block7_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack3_block7_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack3_block7_deep_2_se_out_mul.h"
#include "layer/stack3_block8_deep_2_GC_conv_Conv2D.h"
#include "layer/tf_math_reduce_mean_47_Mean.h"
#include "layer/stack3_block8_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack3_block8_deep_2_se_more_activation_truediv_2.h"
#include "layer/stack3_block8_deep_2_se_more_activation_Softplus.h"
#include "layer/stack3_block8_deep_2_se_more_activation_add.h"
#include "layer/stack3_block8_deep_2_se_more_activation_Tanh.h"
#include "layer/stack3_block8_deep_2_se_more_activation_Sigmoid.h"
#include "layer/stack3_block8_deep_2_se_more_activation_mul.h"
#include "layer/stack3_block8_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack3_block8_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack3_block8_deep_2_se_out_mul.h"
#include "layer/stack3_block9_deep_2_GC_conv_Conv2D.h"
#include "layer/tf_math_reduce_mean_48_Mean.h"
#include "layer/stack3_block9_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack3_block9_deep_2_se_more_activation_truediv_2.h"
#include "layer/stack3_block9_deep_2_se_more_activation_Softplus.h"
#include "layer/stack3_block9_deep_2_se_more_activation_add.h"
#include "layer/stack3_block9_deep_2_se_more_activation_Tanh.h"
#include "layer/stack3_block9_deep_2_se_more_activation_Sigmoid.h"
#include "layer/stack3_block9_deep_2_se_more_activation_mul.h"
#include "layer/stack3_block9_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack3_block9_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack3_block9_deep_2_se_out_mul.h"
#include "layer/stack3_block10_deep_2_GC_conv_Conv2D.h"
#include "layer/tf_math_reduce_mean_49_Mean.h"
#include "layer/stack3_block10_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack3_block10_deep_2_se_more_activation_truediv_2.h"
#include "layer/stack3_block10_deep_2_se_more_activation_Softplus.h"
#include "layer/stack3_block10_deep_2_se_more_activation_add.h"
#include "layer/stack3_block10_deep_2_se_more_activation_Tanh.h"
#include "layer/stack3_block10_deep_2_se_more_activation_Sigmoid.h"
#include "layer/stack3_block10_deep_2_se_more_activation_mul.h"
#include "layer/stack3_block10_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack3_block10_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack3_block10_deep_2_se_out_mul.h"
#include "layer/stack4_block1_shortcut_conv_Conv2D.h"
#include "layer/stack4_block1_deep_1_conv_Conv2D.h"
#include "layer/stack4_block1_deep_1_more_activation_truediv_2.h"
#include "layer/stack4_block1_deep_1_more_activation_Softplus.h"
#include "layer/stack4_block1_deep_1_more_activation_add.h"
#include "layer/stack4_block1_deep_1_more_activation_Tanh.h"
#include "layer/stack4_block1_deep_1_more_activation_Sigmoid.h"
#include "layer/stack4_block1_deep_1_more_activation_mul.h"
#include "layer/stack4_block1_deep_2_GC_conv_Conv2D.h"
#include "layer/stack4_block1_deep_2_more_activation_truediv.h"
#include "layer/stack4_block1_deep_2_more_activation_Softplus.h"
#include "layer/stack4_block1_deep_2_more_activation_add.h"
#include "layer/stack4_block1_deep_2_more_activation_Tanh.h"
#include "layer/stack4_block1_deep_2_more_activation_Sigmoid.h"
#include "layer/stack4_block1_deep_2_more_activation_mul.h"
#include "layer/tf_math_reduce_mean_50_Mean.h"
#include "layer/stack4_block1_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack4_block1_deep_2_se_more_activation_truediv_2.h"
#include "layer/stack4_block1_deep_2_se_more_activation_Softplus.h"
#include "layer/stack4_block1_deep_2_se_more_activation_add.h"
#include "layer/stack4_block1_deep_2_se_more_activation_Tanh.h"
#include "layer/stack4_block1_deep_2_se_more_activation_Sigmoid.h"
#include "layer/stack4_block1_deep_2_se_more_activation_mul.h"
#include "layer/stack4_block1_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack4_block1_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack4_block1_deep_2_se_out_mul.h"
#include "layer/stack4_block1_deep_3_conv_Conv2D.h"
#include "layer/stack4_block1_add_add.h"
#include "layer/stack4_block1_out_more_activation_truediv_2.h"
#include "layer/stack4_block1_out_more_activation_Softplus.h"
#include "layer/stack4_block1_out_more_activation_add.h"
#include "layer/stack4_block1_out_more_activation_Tanh.h"
#include "layer/stack4_block1_out_more_activation_Sigmoid.h"
#include "layer/stack4_block1_out_more_activation_mul.h"
#include "layer/avg_pool_Mean.h"
#include "layer/avg_pool_Mean_Squeeze__3694.h"
#include "layer/predictions_MatMul.h"
#include "layer/predictions_BiasAdd.h"
#include "layer/predictions_Softmax.h"

#endif // LAYER_H_
