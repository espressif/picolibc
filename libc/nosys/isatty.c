/*
 * Stub version of isatty.
 */

#include <unistd.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
isatty(__attribute__((unused)) int file)
{
  errno = ENOSYS;
  return 0;
}

stub_warning(isatty)

