/*
 * Stub version of fstatvfs.
 */

#include <sys/statvfs.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
fstatvfs(__attribute__((unused)) int fd,
         __attribute__((unused)) struct statvfs *buf)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(fstatvfs)

