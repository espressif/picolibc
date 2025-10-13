/*
 * Stub version of pthread_mutexattr_setprotocol.
 */

#define _POSIX_THREAD_PRIO_INHERIT
#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_mutexattr_setprotocol(pthread_mutexattr_t *attr __attribute__((unused)),
                               int protocol __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(pthread_mutexattr_setprotocol)

