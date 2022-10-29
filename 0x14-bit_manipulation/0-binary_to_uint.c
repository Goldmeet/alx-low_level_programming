#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num;
	int i, len, rem, base;

	base = 1;
	dec_num = 0;
	for (i = 0; b[i] != '\0'; i++)
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] > 47 && b[i] < 50)
		{
			rem = b[i] - 48;
			dec_num = dec_num + rem * base;
			base = 2 * base;
		}
		else
			return (NULL);

	}
	return (dec_num);
}
