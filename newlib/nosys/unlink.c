/*
 * Stub version of unlink.
 */

#include <unistd.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
unlink(__attribute__((unused)) const char *name)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(unlink)

