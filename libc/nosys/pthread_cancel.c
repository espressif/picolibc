/*
 * Stub version of pthread_cancel.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_cancel(pthread_t thread __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_cancel)
