#include "print.h"

void kernel_main()
{
    print_clear();
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK );
    for (uint8_t i = 0; i < 255; i++)
    {
        print_char((char)i);
    }
}
