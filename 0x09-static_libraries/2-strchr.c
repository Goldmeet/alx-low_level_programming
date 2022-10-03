#include "main.h"

/**
 * _strchr - searches fir a character
 *
 * @s: strings
 * @c:  character
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (NULL);
}
