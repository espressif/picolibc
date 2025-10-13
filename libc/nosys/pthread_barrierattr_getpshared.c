/*
 * Stub version of pthread_barrierattr_getpshared.
 */

#define _POSIX_BARRIERS
#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_barrierattr_getpshared(const pthread_barrierattr_t *attr __attribute__((unused)),
                                int *pshared __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_barrierattr_getpshared)
