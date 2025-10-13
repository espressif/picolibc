/*
 * Stub version of pthread_yield.
 */

#define _GNU_SOURCE
#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
void
pthread_yield(void)
{
  errno = ENOSYS;
  return;
}

stub_warning(pthread_yield)
