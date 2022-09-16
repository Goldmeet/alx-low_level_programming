#include "main.h"
/**
 *print_diagonal- print line
 *@n: is an integer.
 *Return: return void.
 */
void print_diagonal(int n)
{
   
  if (n <= 0)
    {
      _putchar('\n');

    }
  int i = 1;
  if (n > 0)
    {
      _putchar('\\');
      
      while (i < n)
        {
	  _putchar('\n');
	  int x = 0;
	  while (x < i)
	    {
	      _putchar(' ');
	      x++;
            }
	  _putchar('\\');
	  i++;
        }
      _putchar('\n');

    }
}
