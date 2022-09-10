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

	while (a < 58)
	{
		
		while (b < 58)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (!(a == 56 && b == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		       
		   
			b++;
		}
		a++;
	}
		 			
	putchar('\n');
	return (0);
}
