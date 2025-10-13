/*
 * Stub version of pthread_getconcurrency.
 */

#include <pthread.h>
#include "warning.h"

__attribute__((weak))
int
pthread_getconcurrency(void)
{
  return 0;
}

stub_warning(pthread_getconcurrency)
