/*
 * Stub version of pthread_getcpuclockid.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_getcpuclockid(pthread_t thread __attribute__((unused)),
                      clockid_t *clock_id __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_getcpuclockid)
