/*
 * Stub version of pthread_attr_init.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_attr_init(pthread_attr_t *attr __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(pthread_attr_init)

