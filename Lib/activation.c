#include "activation.h"

LIB_HIDDEN void
add_1_896_14_14 (const float A[1][896][14][14],
                 const float B[1][896][14][14],
                 float       C[1][896][14][14])
{
	/* Add
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i1 = 0; i1 < 896; i1++) {
		for (unsigned i2 = 0; i2 < 14; i2++) {
			for (unsigned i3 = 0; i3 < 14; i3++) {
				C[0][i1][i2][i3] = A[0][i1][i2][i3] + B[0][i1][i2][i3];
			}
		}
	}
}
