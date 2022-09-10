#include <stdio.h>

/**
*main- entery point
*
*Return: always return 0
*/
int main(void)
{
	int a = 48;
	int b = 48;
	int c = 48;

	for (; a < 58; a++)
	{
		
		for (; b < 58; b++)
		{
			for (; b < 58; b++)
			{
			
				if (c > b && b > a)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					if (a != 55 || b != 56 || c != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
				
		}
			
	}
		
	
		 			
	putchar('\n');
	return (0);
}
