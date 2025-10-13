/*
 * Stub version of pthread_setcanceltype.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_setcanceltype(int type __attribute__((unused)),
                      int *oldtype __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_setcanceltype)
