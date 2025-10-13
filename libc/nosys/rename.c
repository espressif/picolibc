/*
 * Stub version of rename.
 */

#include <stdio.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
rename(__attribute__((unused)) const char *old,
       __attribute__((unused)) const char *new)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(rename)

