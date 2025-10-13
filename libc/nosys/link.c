/*
 * Stub version of link.
 */

#include <unistd.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
link(__attribute__((unused)) const char *old,
     __attribute__((unused)) const char *new)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(link)

