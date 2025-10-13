/*
 * Stub version of pthread_key_create.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_key_create(pthread_key_t *key __attribute__((unused)),
                   void (*destructor)(void*) __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_key_create)
