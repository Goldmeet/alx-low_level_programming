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

	while (a < 58)
	{
		
		while (b < 58)
		{
			while(c < 58)
			{
			
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55 || b != 56 || c != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
				c++;
		}
			b++;
	}
		a++;
	
		 			
	putchar('\n');
	return (0);
}
