/*
 * Stub version of pthread_getschedparam.
 */

#define _POSIX_THREAD_PRIORITY_SCHEDULING
#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_getschedparam(pthread_t thread __attribute__((unused)),
                      int *policy __attribute__((unused)),
                      struct sched_param *param __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_getschedparam)
