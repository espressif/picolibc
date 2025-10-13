/*
 * Stub version of readdir.
 */

#include <stddef.h>
#include <dirent.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
struct dirent *
readdir(__attribute__((unused)) DIR *dirp)
{
  errno = ENOSYS;
  return NULL;
}

stub_warning(readdir)

