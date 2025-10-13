/*
 * Stub version of pthread_getname_np.
 */

#define _GNU_SOURCE
#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_getname_np(pthread_t thread __attribute__((unused)),
                   char *name __attribute__((unused)),
                   size_t len __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_getname_np)
