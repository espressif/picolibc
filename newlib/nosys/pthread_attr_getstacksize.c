/*
 * Stub version of pthread_attr_getstacksize.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_attr_getstacksize(const pthread_attr_t *attr __attribute__((unused)),
                          size_t *stacksize __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(pthread_attr_getstacksize)

