#include "main.h"
/**
 *print_last_digit- print the last digit
 *@n: is of integer value
 *Return: Always return i
 */
int print_last_digit(int n)
{
    int i;
    if(n < 0)
    {
      i = -1 * (n % 10);
        _putchar('0' + i);
        return (i);
        
    }
    else
    {
        i = n % 10;
        _putchar ('0' + i);
        return (i);
    }
    
    
     
}
