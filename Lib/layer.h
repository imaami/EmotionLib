#ifndef LAYER_H_
#define LAYER_H_

#include <math.h>
#include <stdint.h>

#include "layer/stem_more_activation_add.h"
#include "layer/stem_more_activation_Tanh.h"
#include "layer/stem_more_activation_mul.h"
#include "layer/stack1_block1_shortcut_conv_Conv2D.h"
#include "layer/stack1_block1_deep_1_conv_Conv2D.h"
#include "layer/stack1_block1_deep_1_more_activation_truediv_1.h"
#include "layer/stack1_block1_deep_1_more_activation_Softplus.h"
#include "layer/stack1_block1_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack1_block1_deep_2_se_more_activation_truediv_2.h"
#include "layer/stack1_block1_deep_2_se_more_activation_add.h"
#include "layer/stack1_block1_deep_2_se_more_activation_Tanh.h"
#include "layer/stack1_block1_deep_2_se_more_activation_mul.h"
#include "layer/stack1_block1_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack1_block2_deep_2_GC_conv_Conv2D.h"
#include "layer/stack2_block1_deep_1_more_activation_truediv.h"
#include "layer/stack2_block1_deep_1_more_activation_add.h"
#include "layer/stack2_block1_deep_1_more_activation_Tanh.h"
#include "layer/stack2_block1_deep_1_more_activation_mul.h"
#include "layer/stack2_block1_deep_2_GC_conv_Conv2D.h"
#include "layer/stack2_block1_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack2_block1_deep_2_se_2_conv_BiasAdd.h"
#include "layer/stack3_block1_deep_1_more_activation_add.h"
#include "layer/stack3_block1_deep_1_more_activation_mul.h"
#include "layer/stack4_block1_deep_1_more_activation_add.h"
#include "layer/stack4_block1_deep_2_se_1_conv_BiasAdd.h"
#include "layer/stack4_block1_deep_2_se_sigmoid_Sigmoid.h"
#include "layer/stack4_block1_deep_2_se_out_mul.h"
#include "layer/avg_pool_Mean_Squeeze__3694.h"

#endif // LAYER_H_
