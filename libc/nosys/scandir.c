/*
 * Stub version of scandir.
 */

#define _POSIX_C_SOURCE 200809L
#include <dirent.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
scandir(const char *dirp __attribute__((unused)),
        struct dirent ***namelist __attribute__((unused)),
        int (*filter)(const struct dirent *) __attribute__((unused)),
        int (*compar)(const struct dirent **, const struct dirent **) __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(scandir)

