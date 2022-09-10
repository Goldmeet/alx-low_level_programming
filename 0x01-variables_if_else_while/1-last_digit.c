
File Edit Options Buffers Tools C Help
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
           int n;
	   int last_d;

           srand(time(0));
           n = rand() - RAND_MAX / 2;
	   last_d = n %  10;
/* your code goes there */
           if (last_d  > 5)
           {

               printf("the last digit of %d is %d and is greater than 5\n", n, last_d);
           }
           else if (last_d  == 0)
           {
	      printf("the last digit of %d is %d and is 0 \n", n, last_d);
           }
           else if (last_d  < 6)
           {
               printf("the last digit of %d is %d and is less than 6 not 0\n", n, last_d);
           }

            return (0);
}
