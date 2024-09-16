#ifndef IO_STYLER_H
#define IO_STYLER_H

// look this for more info : https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797

#define RESET  "\x1B[0m"

// foreground colors
#define FG_BLACK  "\x1B[30m"
#define FG_RED  "\x1B[31m"
#define FG_GREEN  "\x1B[32m"
#define FG_YELLOW  "\x1B[33m"
#define FG_BLUE  "\x1B[34m"
#define FG_MAGENTA  "\x1B[35m"
#define FG_CYAN  "\x1B[36m"
#define FG_WHITE  "\x1B[37m"

// background colors
#define BG_BLACK  "\x1B[40m"
#define BG_RED  "\x1B[41m"
#define BG_GREEN  "\x1B[42m"
#define BG_YELLOW  "\x1B[43m"
#define BG_BLUE  "\x1B[44m"
#define BG_MAGENTA  "\x1B[45m"
#define BG_CYAN  "\x1B[46m"
#define BG_WHITE  "\x1B[47m"

// text styles
#define ST_BOLD  "\x1B[1m"
#define ST_FAINT  "\x1B[2m"
#define ST_ITALIC  "\x1B[3m"
#define ST_UNDERLINE  "\x1B[4m"
#define ST_BLINK  "\x1B[5m"
#define ST_REVERSE  "\x1B[7m"

int c_printf(char **styles, char *format, ...);
int c_scanf(char **styles, char *format, ...);

#endif // IO_STYLER_H