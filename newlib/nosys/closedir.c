/*
 * Stub version of closedir.
 */

#include <dirent.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
closedir(__attribute__((unused)) DIR *dirp)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(closedir)

