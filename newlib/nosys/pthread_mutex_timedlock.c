/*
 * Stub version of pthread_mutex_timedlock.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_mutex_timedlock(pthread_mutex_t *mutex __attribute__((unused)),
                        const struct timespec *abstime __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(pthread_mutex_timedlock)

