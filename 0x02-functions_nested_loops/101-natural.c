#include<stdio.h>
/**
*main- print multiples of 3 and 5
* add the sum of them
*Return: Alwys return 0.
*/
int main(void)
{
	int z = 1;
	int i;
	int j;
	int sum;
	while(z < 1024)
	{
	    if(z % 3 == 0)
	        i += z;
	    if(z % 5 == 0)
	        j += z;
	     z++;
	    }
	    sum = i + j;
	    printf("%d\n", sum);
	    return (0);
}
