/*
 * Stub version of pthread_join.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_join(pthread_t thread __attribute__((unused)),
             void **retval __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_join)
