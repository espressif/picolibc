/*
 * Stub version of pthread_rwlock_timedwrlock.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_rwlock_timedwrlock(pthread_rwlock_t *rwlock __attribute__((unused)),
                           const struct timespec *abstime __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_rwlock_timedwrlock)
