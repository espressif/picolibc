/*
 * Stub version of statvfs.
 */

#include <sys/statvfs.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
statvfs(__attribute__((unused)) const char *path,
        __attribute__((unused)) struct statvfs *buf)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(statvfs)

