/*
 * Stub version of getpid.
 */

#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
pid_t
getpid(void)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(getpid)