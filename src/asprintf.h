#ifdef _GNU_SOURCE
#include <stdio.h>
#else
int asprintf(char **restrict strp, const char *restrict fmt, ...);
#endif
