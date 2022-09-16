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
      _putchar(92);
      
      while (i < n)
        {
	  _putchar('\n');
	  int x = 0;
	  while (x < i)
	    {
	      _putchar(' ');
	      x++;
            }
	  _putchar(92);
	  i++;
        }
      _putchar('\n');

    }
}
