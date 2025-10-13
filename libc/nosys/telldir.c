/*
 * Stub version of telldir.
 */

#define _XOPEN_SOURCE 700
#include <dirent.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
long
telldir(DIR *dirp __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(telldir)

