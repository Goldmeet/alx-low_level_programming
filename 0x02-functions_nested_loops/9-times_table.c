#include "main.h"
/**
*times_table- print multiplication from 0 to *9
*Return: return void
*/
void times_table(void)
{
	int i = 0; /* factor */
	int j; /* count  */
	int z; /* computed value */

	for (; i < 10; i++)
	{
		j= 0;
		for (; j < 10;  j++)
		{
			z = i * j;
			if (z > 9)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(z + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			
		}
		_putchar('\n');
		
	}
}
