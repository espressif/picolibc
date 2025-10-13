/*
 * Stub version of pthread_cond_broadcast.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_cond_broadcast(pthread_cond_t *cond __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}

stub_warning(pthread_cond_broadcast)

