/*
 * Stub version of fcntl.
 */

#include <fcntl.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
fcntl(__attribute__((unused)) int fd,
      __attribute__((unused)) int cmd,
      ...)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(fcntl)

