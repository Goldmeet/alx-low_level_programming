#include "main.h"
/**
 *print_diagonal- print line
 *@n: is an integer.
 *Return: return void.
 */
void print_diagonal(int n)
{
    int i, x;
    if (n <= 0)
      _putchar('\n');
  
    if (n > 0)
    {
      i = 1;
        while (i < n)
        {

            x = 0;
            while (x < i)
            {
                _putchar(' ');
                x++;
            }
            _putchar('\\');
            _putchar('\n');
            i++;
        }
        

    }
}
