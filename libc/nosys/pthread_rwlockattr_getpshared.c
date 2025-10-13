/*
 * Stub version of pthread_rwlockattr_getpshared.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_rwlockattr_getpshared(const pthread_rwlockattr_t *attr __attribute__((unused)),
                               int *pshared __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_rwlockattr_getpshared)
