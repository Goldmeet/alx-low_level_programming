#include "main.h"
/**
 *_strcat- concatinate two string.
 *@dest: pointer of type character.
 *@src: pointer of type character 
 *Return: Alway return a pointer.
 */
char *_strcat2(char *dest, char *src)
{
	int i = 0, j = 0;
	char *p;
	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	p = dest;
	return (p);
}
