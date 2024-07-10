#include "stdio_private.h"

#ifdef _WANT_FLOCKFILE

void flockfile(FILE *f) {
    __flockfile(f);
}

void funlockfile(FILE *f) {
    __funlockfile(f);
}

#endif // _WANT_FLOCKFILE
