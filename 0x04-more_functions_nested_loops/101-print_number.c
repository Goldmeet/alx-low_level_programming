#include "main.h"
/**
 *print_number- print integer numbers
 *@n: is an integer value to be printed
 *Return: return viod.
 */
void print_number(int i)
{
    int d, c;
    if (i / 10 != 0)
    {
        d = i  / 10;
        c = i % 10;
        putchar('0' + d);
        putchar('0' + c);
    }
    else if (i > 0)
    {
        putchar('0' + i);
    }
    else if ( i < 0)
    {
        c = -i % 10;
        putchar('-');
        putchar('0' + c);
    }
}
