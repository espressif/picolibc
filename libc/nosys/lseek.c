/*
 * Stub version of lseek.
 */

#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
off_t
lseek(__attribute__((unused)) int file,
      __attribute__((unused)) off_t offset,
      __attribute__((unused)) int whence)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(lseek)