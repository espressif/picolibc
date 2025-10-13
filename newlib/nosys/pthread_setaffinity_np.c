/*
 * Stub version of pthread_setaffinity_np.
 */

#define _GNU_SOURCE
#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_setaffinity_np(pthread_t thread __attribute__((unused)),
                       size_t cpusetsize __attribute__((unused)),
                       const void *cpuset __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_setaffinity_np)
