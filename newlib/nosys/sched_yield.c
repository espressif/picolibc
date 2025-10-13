/*
 * Stub version of sched_yield.
 */

#include <sched.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
sched_yield(void)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(sched_yield)

