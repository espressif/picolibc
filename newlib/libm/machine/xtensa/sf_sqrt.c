#include <machine/core-isa.h>

#if XCHAL_HAVE_FP_SQRT
float __ieee754_sqrtf (float x);

float
sqrtf (float x)
{
  return __ieee754_sqrtf(x);
}
#else
#include "../../math/sf_sqrt.c"
#endif
