/*
 * Stub version of stat.
 */

#include <sys/stat.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
stat(__attribute__((unused)) const char *file,
     __attribute__((unused)) struct stat *st)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(stat)

