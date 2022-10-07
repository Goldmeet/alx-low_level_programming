#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned integer
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *str;
	if (s1 == NULL)
	  s1 = " ";
	if (s2 == NULL)
	  S2 = " ";

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
                len1++;
	if (s2 != NULL)
		for (i = 0; s2[i] != '\0'; i++)
                len2++;
	if (n >= len2)
            n = len2;
	str = malloc(sizeof(char*) * (len1 + n + 1));
	if (str == NULL)
            return (NULL);


	for (i = 0; *(s1 + i) != '\0'; i++)
            *(str + i) = *(s1 + i);


	for (j = 0; j < n; j++)
	  {
	    *(str + i) = *(s2 + j);
            i++;
	  }

	*(str + i) = '\0';
	return (str);
}
