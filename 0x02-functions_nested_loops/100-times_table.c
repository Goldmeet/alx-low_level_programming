#include "main.h"
/**
*print_times_table- print multiplication of n
 *numbers
*@n: is an integer value
*Return: return void
*/
void print_times_table(int n)
{
	int i = 0; /* factor */
	int j; /*count*/
	int z; /* computed value */
	if (n > 15 || n < 0)
	    return;
	for (; i <=n; i++)
	{
		j = 0;
		for (; j <= n;  j++)
		{
			z = i * j;
			if (z > 99)
			{
				_putchar(z / 100 + '0');
				_putchar(z % 10 + '0');
				_putchar(z % 10 + '0');
			}
			else if (z > 9)
			{
			    _putchar(' ');
			    _putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
		      }
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(z + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			
		}
		_putchar('\n');
		
	}
}
