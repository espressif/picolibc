/*
 * Stub version of pthread_mutexattr_init.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_mutexattr_init(pthread_mutexattr_t *attr __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_mutexattr_init)

