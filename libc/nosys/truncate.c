#define _GNU_SOURCE
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include "warning.h"

__attribute__((weak))
int truncate(const char* path __attribute__((unused)),
             off_t length __attribute__((unused)))
{
  errno = ENOTSUP;
  return -1;
}

stub_warning(truncate)
