/*
 * Stub version of getentropy.
 */

#define _BSD_SOURCE
#include <unistd.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
getentropy(void *buffer __attribute__((unused)),
           size_t length __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(getentropy)

