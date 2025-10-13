/*
 * Stub version of execve.
 */

#include <unistd.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
execve(__attribute__((unused)) const char *path,
       __attribute__((unused)) char *const argv[],
       __attribute__((unused)) char *const envp[])
{
  errno = ENOSYS;
  return -1;
}

stub_warning(execve)

