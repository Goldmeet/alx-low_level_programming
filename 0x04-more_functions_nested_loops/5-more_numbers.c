#include "main.h"
/**
 *more_numbers- print numbers
 *
 *Return: return void.
 */
void more_numbers(void)
{

  int i = 1;
  while (i <= 10)
    {
      int j = 0;
      while(j <= 14)
	{
	  _putchar('0' + j);
	  j++;
	}
      
      _putchar('\n');
      i++;

    }
  _putchar('\n');
}
