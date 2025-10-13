/*
 * Stub version of pthread_attr_setstackaddr.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_attr_setstackaddr(pthread_attr_t *attr __attribute__((unused)),
                          void *stackaddr __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_attr_setstackaddr)
