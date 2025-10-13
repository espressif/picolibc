/*
 * Stub version of pathconf.
 */

#include <unistd.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
long
pathconf(__attribute__((unused)) const char *path,
         __attribute__((unused)) int name)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(pathconf)

