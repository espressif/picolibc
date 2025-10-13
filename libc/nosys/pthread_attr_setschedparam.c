/*
 * Stub version of pthread_attr_setschedparam.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_attr_setschedparam(pthread_attr_t *attr __attribute__((unused)),
                           const struct sched_param *param __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(pthread_attr_setschedparam)

