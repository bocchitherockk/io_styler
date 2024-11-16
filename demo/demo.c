#include <stdio.h>
#include "../io_styler.h"

int main() {
    char *message = "Hello, how are you!\n";
    c_printf((char* []) { BG_WHITE, FG_BLUE, ST_BOLD, NULL }, message);
    c_printf((char* []) { FG_RED, ST_BOLD, NULL }, message);
    c_printf((char* []) { FG_BLUE, NULL }, message);
    c_printf((char* []) { ST_BOLD, FG_RED, FG_BLUE, NULL }, message);
    return 0;
}