/*
 * Stub version of errno.
 */

#include <errno.h>
#include "warning.h"

#if defined(__PICOLIBC_ERRNO_FUNCTION)
static __THREAD_LOCAL_ERRNO int __picolibc_errno;

__attribute__((weak)) int *
__PICOLIBC_ERRNO_FUNCTION(void)
{
    return &__picolibc_errno;
}

#define _ERRNO_FN_STR(x) #x
#define ERRNO_FN_STR(x) _ERRNO_FN_STR(x)
#define LINK_WARNING_X(sym, msg) link_warning(sym, msg)
LINK_WARNING_X(__PICOLIBC_ERRNO_FUNCTION,
		ERRNO_FN_STR(__PICOLIBC_ERRNO_FUNCTION)
		" is a libnosys fallback using a private errno;"
		" provide a strong definition that returns the OS errno address")
#endif
