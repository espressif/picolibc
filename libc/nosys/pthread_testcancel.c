/*
 * Stub version of pthread_testcancel.
 */

#include <pthread.h>
#include "warning.h"

__attribute__((weak))
void
pthread_testcancel(void)
{
  return;
}

stub_warning(pthread_testcancel)
