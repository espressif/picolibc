/*
 * Stub version of pthread_attr_getstack.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_attr_getstack(const pthread_attr_t *attr __attribute__((unused)),
                      void **stackaddr __attribute__((unused)),
                      size_t *stacksize __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_attr_getstack)
