#include "main.h"
/**
 *more_numbers- print numbers
 *
 *Return: return void.
 */
void more_numbers(void)
{

  int i = 1;
  int tmp;
  while (i <= 10)
    {
      int j = 0;
      while(j <= 14)
	{
	  tmp = j;
	  if (j > 9)
	    tmp = j / 10;
	  _putchar('0' + tmp);
	  if (j > 9)
	    _putchar('0' + j % 10);
	  j++;
	}
      
      _putchar('\n');
      i++;

    }
  
}
