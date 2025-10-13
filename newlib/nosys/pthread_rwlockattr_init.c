/*
 * Stub version of pthread_rwlockattr_init.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_rwlockattr_init(pthread_rwlockattr_t *attr __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_rwlockattr_init)
