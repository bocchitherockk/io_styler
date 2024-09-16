#include <stdio.h>
#include <stdarg.h>
#include "./io_styler.h"

int c_printf(char **styles, char *format, ...) {
    va_list arg;

    va_start(arg, format);
    for (int i = 0; styles[i] != NULL; i++) {
        printf("%s", styles[i]);
    }
    int done = vfprintf(stdout, format, arg);
    printf(RESET);
    va_end(arg);

    return done;
}

int c_scanf(char **styles, char *format, ...) {
    va_list arg;

    va_start(arg, format);
    for (int i = 0; styles[i] != NULL; i++) {
        printf("%s", styles[i]);
    }
    int done = vfscanf(stdin, format, arg);
    printf(RESET);
    va_end(arg);

    return done;
}
