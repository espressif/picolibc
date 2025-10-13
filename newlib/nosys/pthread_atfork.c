/*
 * Stub version of pthread_atfork.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_atfork(void (*prepare)(void) __attribute__((unused)),
               void (*parent)(void) __attribute__((unused)),
               void (*child)(void) __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_atfork)
