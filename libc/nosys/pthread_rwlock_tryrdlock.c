/*
 * Stub version of pthread_rwlock_tryrdlock.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_rwlock_tryrdlock(pthread_rwlock_t *rwlock __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_rwlock_tryrdlock)
