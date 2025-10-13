/*
 * Stub version of getcwd.
 */

#include <stddef.h>
#include <unistd.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
char *
getcwd(__attribute__((unused)) char *buf,
       __attribute__((unused)) size_t size)
{
  errno = ENOSYS;
  return NULL;
}

stub_warning(getcwd)

