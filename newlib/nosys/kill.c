/*
 * Stub version of kill.
 */

#define _POSIX_C_SOURCE 200809L
#include <sys/types.h>
#include <signal.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
kill(pid_t pid __attribute__((unused)),
     int sig __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(kill)