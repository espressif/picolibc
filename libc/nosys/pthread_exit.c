/*
 * Stub version of pthread_exit.
 */

#include <pthread.h>
#include <stdlib.h>
#include "warning.h"

__attribute__((weak))
void
pthread_exit(void *retval __attribute__((unused)))
{
  exit(0);
}

stub_warning(pthread_exit)
