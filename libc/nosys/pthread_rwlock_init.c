/*
 * Stub version of pthread_rwlock_init.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_rwlock_init(pthread_rwlock_t *rwlock __attribute__((unused)),
                    const pthread_rwlockattr_t *attr __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_rwlock_init)
