/*
 * Stub version of pthread_mutexattr_setprioceiling.
 */

#define _POSIX_THREAD_PRIO_INHERIT
#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_mutexattr_setprioceiling(pthread_mutexattr_t *attr __attribute__((unused)),
                                  int prioceiling __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(pthread_mutexattr_setprioceiling)

