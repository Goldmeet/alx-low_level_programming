#include <stdio.h>
/**
 * main - prints numbers from 1 to 100 followed by a new line and replaces
 * Fizz, Buzz or FizzBuzz if the number is a multiple of 3, 5
 *
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2;
	printf("%d", a);
	while (i < 101)
	{
		if (b % 3 == 0 && b % 5 == 0)
			printf(" FizzBuzz");
		else if (b % 3 == 0)
			printf(" Fizz");
		else if (b % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
		i++;
	}
	printf("\n");
	return (0);
}
