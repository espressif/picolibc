/*
 * Stub version of pthread_setspecific.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_setspecific(pthread_key_t key __attribute__((unused)),
                    const void *value __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_setspecific)
