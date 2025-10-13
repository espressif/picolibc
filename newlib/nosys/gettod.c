/*
 * Stub version of gettimeofday.
 */

#include <sys/time.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
gettimeofday(__attribute__((unused)) struct timeval *tv,
             __attribute__((unused)) void *tz)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(gettimeofday)

