/*
 * Stub version of pthread_once.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_once(pthread_once_t *once_control __attribute__((unused)),
             void (*init_routine)(void) __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_once)
