/*
 * Stub version of pthread_setschedprio.
 */

#define _POSIX_THREAD_PRIORITY_SCHEDULING
#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_setschedprio(pthread_t thread __attribute__((unused)),
                     int prio __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_setschedprio)
