#include "main.h"
/**
 **_menset- print the memory contant
 *@s: is a pointer
 *@b: is a constant character
 *@n: is an unsigned integer
 *Return: returns a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned i;
    for (i = 0; i <= n; i++)
        s[i] = b;
    return (s);

}
