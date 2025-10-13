/*
 * Stub version of _pthread_cleanup_push.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
void
_pthread_cleanup_push(struct _pthread_cleanup_context *context __attribute__((unused)),
                      void (*routine)(void *) __attribute__((unused)),
                      void *arg __attribute__((unused)))
{
  errno = ENOSYS;
}

stub_warning(_pthread_cleanup_push)
