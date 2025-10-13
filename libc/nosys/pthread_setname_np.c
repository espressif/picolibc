/*
 * Stub version of pthread_setname_np.
 */

#define _GNU_SOURCE
#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_setname_np(pthread_t thread __attribute__((unused)),
                   const char *name __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_setname_np)
