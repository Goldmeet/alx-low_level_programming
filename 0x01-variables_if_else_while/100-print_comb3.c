#include <stdio.h>

/**
*main- entery point
*
*Return: always return 0
*/
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		
	  for (b = 0 + 1; b < 9; b++)
	    {
	       if (a != b && a < b)
		 {
		   putchar('0' + a);
		   putchar('0' + b);
		   if (a != 8 || b != 9)
		      {
      			putchar(',');
			putchar(' ');
		      }
		 }
	    }
	      
	 }
		 			
	putchar('\n');
	return (0);
}
