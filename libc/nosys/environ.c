/*
 * Stub version of environ.
 */

#include <stddef.h>
#include <unistd.h>
#include "warning.h"

__attribute__((weak))
char **environ = NULL;

stub_warning(environ)

