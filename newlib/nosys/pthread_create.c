/*
 * Stub version of pthread_create.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_create(pthread_t *thread __attribute__((unused)),
               const pthread_attr_t *attr __attribute__((unused)),
               void *(*start_routine)(void *) __attribute__((unused)),
               void *arg __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(pthread_create)

