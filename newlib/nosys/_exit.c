/*
 * Stub version of _exit.
 */

#include <unistd.h>
#include <limits.h>
#include "warning.h"

__attribute__((weak))
void
_exit (int rc)
{
  /* Default stub just causes a divide by 0 exception.  */
  int x = rc / INT_MAX;
  x = 4 / x;

  /* Convince GCC that this function never returns.  */
  for (;;)
    ;
}

stub_warning(_exit)
