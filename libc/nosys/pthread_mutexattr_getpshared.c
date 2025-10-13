/*
 * Stub version of pthread_mutexattr_getpshared.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_mutexattr_getpshared(const pthread_mutexattr_t *attr __attribute__((unused)),
                              int *pshared __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(pthread_mutexattr_getpshared)

