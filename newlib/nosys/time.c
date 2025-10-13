/*
 * Stub version of time.
 */

#include <sys/types.h>
#include <time.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
time_t
time(__attribute__((unused)) time_t *t)
{
  errno = ENOSYS;
  return (time_t)-1;
}

stub_warning(time)