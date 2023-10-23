#ifndef _GNU_SOURCE
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

// Polyfill asprintf, comes from stdio when _GNU_SOURCE is defined
char * asprintf(char **restrict strp, const char *restrict fmt, ...) {
  va_list argptr;
  va_start(argptr, fmt);
  int size = vsnprintf(NULL, 0, fmt, argptr);
  char *output = calloc(1, size + 1);
  vsnprintf(output, size + 1, fmt, argptr);
  va_end(argptr);
  return output;
}
#endif
