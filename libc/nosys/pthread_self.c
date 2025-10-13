/*
 * Stub version of pthread_self.
 */

#include <pthread.h>
#include "warning.h"

__attribute__((weak))
pthread_t
pthread_self(void)
{
  return (pthread_t)0;
}

stub_warning(pthread_self)
