/*
 * Stub version of chown.
 */

#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
chown(__attribute__((unused)) const char *path,
      __attribute__((unused)) uid_t owner,
      __attribute__((unused)) gid_t group)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(chown)