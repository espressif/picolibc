/*
 * Stub version of pthread_mutex_getprioceiling.
 */

#define _POSIX_THREAD_PRIO_PROTECT
#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_mutex_getprioceiling(const pthread_mutex_t *mutex __attribute__((unused)),
                              int *prioceiling __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(pthread_mutex_getprioceiling)

