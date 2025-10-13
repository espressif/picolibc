/*
 * Stub version of pthread_condattr_getclock.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_condattr_getclock(const pthread_condattr_t *attr __attribute__((unused)),
                          clockid_t *clock_id __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(pthread_condattr_getclock)

