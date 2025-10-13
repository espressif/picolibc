/*
 * Stub version of fstat.
 */

#include <sys/stat.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
fstat(__attribute__((unused)) int file,
      __attribute__((unused)) struct stat *st)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(fstat)

