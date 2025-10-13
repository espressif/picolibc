/*
 * Stub version of ftw.
 */

#include <sys/stat.h>
#include <ftw.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
ftw(const char *dirpath __attribute__((unused)),
    int (*fn)(const char *, const struct stat *, int) __attribute__((unused)),
    int nopenfd __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(ftw)

