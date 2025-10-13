/*
 * Stub version of pthread_attr_getschedparam.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_attr_getschedparam(const pthread_attr_t *attr __attribute__((unused)),
                           struct sched_param *param __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(pthread_attr_getschedparam)

