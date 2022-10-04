

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string to duplicate
 * Return: char pointer
 */
char *_strdup(char *str)
{
	char *sd;
	unsigned int j, i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	       ;
	sd = malloc(sizeof(char) * i + 1);
	if (sd == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		sd[j] = str[j];
	sd[i] = '\0';
	return (sd);
}
