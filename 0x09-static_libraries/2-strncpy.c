#include "main.h"

/**
 * _strncpy - function to copy a strings and return a new string
 * with n elements of the appended string
 *
 * @dest: string 1
 * @src: string 2
 * @n: number of chars to include from appended string
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
  int i, j;
	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			for (j = i; j < n && dest[j] != '\0'; j++)
				dest[j] = '\0';
			break;
		}
		dest[i] = src[i];
	}
	return (dest);
}
