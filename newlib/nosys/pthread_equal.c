/*
 * Stub version of pthread_equal.
 */

#include <pthread.h>
#include "warning.h"

__attribute__((weak))
int
pthread_equal(pthread_t t1 __attribute__((unused)),
              pthread_t t2 __attribute__((unused)))
{
  return 1;
}

stub_warning(pthread_equal)
