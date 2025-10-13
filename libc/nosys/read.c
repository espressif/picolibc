/*
 * Stub version of read.
 */

#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
ssize_t
read (__attribute__((unused)) int   file,
      __attribute__((unused)) void  *ptr,
      __attribute__((unused)) size_t len)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(read)