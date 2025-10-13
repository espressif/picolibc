/*
 * Stub version of pthread_mutex_unlock.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_mutex_unlock(pthread_mutex_t *mutex __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(pthread_mutex_unlock)

