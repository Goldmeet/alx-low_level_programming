#include "main.h"
/**
 *print_most_numbers- print numbers except 2 and 4
 *
 *Return: return void.
 */
void print_most_numbers(void)
{
  int i;
  for (i = 0; i<= 9; i++)
    {
      if (i == 2 || i == 4)
	continue;
      _putchar('0' + i);


    }
  _putchar('\n');
}
