/*
 * Stub version of pthread_setcancelstate.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_setcancelstate(int state __attribute__((unused)),
                       int *oldstate __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_setcancelstate)
