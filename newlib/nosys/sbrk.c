/*
 * Stub version of sbrk.
 */

#include <stddef.h>
#include <unistd.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
void *
sbrk(__attribute__((unused)) ptrdiff_t incr)
{
  errno = ENOSYS;
  return (void *)-1;
}

stub_warning(sbrk)
