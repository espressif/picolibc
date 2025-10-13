/*
 * Stub version of open.
 */

#include <fcntl.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
open(__attribute__((unused)) const char *name,
     __attribute__((unused)) int flags,
     ...)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(open)

