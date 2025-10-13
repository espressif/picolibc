/*
 * Stub version of rewinddir.
 */

#include <dirent.h>
#include "warning.h"

__attribute__((weak))
void
rewinddir(__attribute__((unused)) DIR *dirp)
{
}

stub_warning(rewinddir)

