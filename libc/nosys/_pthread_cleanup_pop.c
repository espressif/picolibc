/*
 * Stub version of _pthread_cleanup_pop.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
void
_pthread_cleanup_pop(struct _pthread_cleanup_context *context __attribute__((unused)),
                     int execute __attribute__((unused)))
{
  errno = ENOSYS;
}

stub_warning(_pthread_cleanup_pop)
