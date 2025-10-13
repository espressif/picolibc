/*
 * Stub version of times.
 */

#include <sys/types.h>
#include <sys/times.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
clock_t
times(__attribute__((unused)) struct tms *buf)
{
  errno = ENOSYS;
  return (clock_t)-1;
}

stub_warning(times)