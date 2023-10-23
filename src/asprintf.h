#ifdef _GNU_SOURCE
#include <stdio.h>
#else
char * asprintf(char **restrict strp, const char *restrict fmt, ...);
#endif
