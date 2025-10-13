/*
 * Stub version of seekdir.
 */

#define _XOPEN_SOURCE 700
#include <dirent.h>
#include "warning.h"

__attribute__((weak))
void
seekdir(DIR *dirp __attribute__((unused)),
        long loc __attribute__((unused)))
{
}

stub_warning(seekdir)

