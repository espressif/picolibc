/*
 * Stub version of pthread_barrier_destroy.
 */

#define _POSIX_BARRIERS
#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_barrier_destroy(pthread_barrier_t *barrier __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_barrier_destroy)
