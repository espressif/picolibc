#include <xtensa/config/core-isa.h>

#if !XCHAL_HAVE_FP_SQRT
#include "../../math/sf_sqrt.c"
#else
float sqrtf (float x)
{
	float __ieee754_sqrtf (float x);
	return __ieee754_sqrtf(x);
}
#endif
