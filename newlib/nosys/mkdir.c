/*
 * Stub version of mkdir.
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
mkdir(__attribute__((unused)) const char *path,
      __attribute__((unused)) mode_t mode)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(mkdir)