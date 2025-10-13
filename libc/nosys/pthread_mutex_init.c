/*
 * Stub version of pthread_mutex_init.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_mutex_init(pthread_mutex_t *mutex __attribute__((unused)),
                   const pthread_mutexattr_t *attr __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_mutex_init)

