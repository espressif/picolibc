/*
 * Stub version of fork.
 */

#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
pid_t
fork(void)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(fork)