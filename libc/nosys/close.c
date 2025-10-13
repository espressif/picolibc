/*
 * Stub version of close.
 */

#include <unistd.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
close(__attribute__((unused)) int file)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(close)

