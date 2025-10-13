/*
 * Stub version of pthread_getspecific.
 */

#include <pthread.h>
#include <stddef.h>
#include "warning.h"

__attribute__((weak))
void *
pthread_getspecific(pthread_key_t key __attribute__((unused)))
{
  return NULL;
}

stub_warning(pthread_getspecific)
