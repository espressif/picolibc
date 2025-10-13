/*
 * Stub version of nftw.
 */

#include <sys/stat.h>
#include <ftw.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
nftw(const char *dirpath __attribute__((unused)),
     int (*fn)(const char *, const struct stat *, int, struct FTW *) __attribute__((unused)),
     int nopenfd __attribute__((unused)),
     int flags __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(nftw)

