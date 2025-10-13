/*
 * Stub version of pthread_spin_destroy.
 */

#define _POSIX_SPIN_LOCKS
#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
int
pthread_spin_destroy(pthread_spinlock_t *lock __attribute__((unused)))
{
  errno = ENOSYS;
  return ENOSYS;
}

stub_warning(pthread_spin_destroy)
