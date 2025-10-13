/*
 * Stub version of pthread_mutex_clocklock.
 */

#define _GNU_SOURCE
#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_mutex_clocklock(pthread_mutex_t *mutex __attribute__((unused)),
                        clockid_t clockid __attribute__((unused)),
                        const struct timespec *abstime __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(pthread_mutex_clocklock)

