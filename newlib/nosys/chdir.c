/*
 * Stub version of chdir.
 */

#include <unistd.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
chdir(__attribute__((unused)) const char *path)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(chdir)

