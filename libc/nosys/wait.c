/*
 * Stub version of wait.
 */

#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
pid_t
wait(__attribute__((unused)) int *status)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(wait)