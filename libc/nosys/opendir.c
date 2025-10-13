/*
 * Stub version of opendir.
 */

#include <stddef.h>
#include <dirent.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
DIR *
opendir(__attribute__((unused)) const char *name)
{
  errno = ENOSYS;
  return NULL;
}

stub_warning(opendir)

