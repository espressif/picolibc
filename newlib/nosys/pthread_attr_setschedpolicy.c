/*
 * Stub version of pthread_attr_setschedpolicy.
 */

#define _POSIX_THREAD_PRIORITY_SCHEDULING
#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_attr_setschedpolicy(pthread_attr_t *attr __attribute__((unused)),
                            int policy __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_attr_setschedpolicy)
