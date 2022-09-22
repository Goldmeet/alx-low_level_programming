#include "main.h"
/**
 *_strcat- concatinate two string.
 *@dest: pointer of type character.
 *@src: pointer of type character 
 *Return: Alway return a pointer.
 */
char *_strcat(char *dest, char *src)
{
                 int i;
                 int len = 0;
		 char *p;

                 for(i = 0; *(dest + i) != '\0'; i++)
                             len++;
                 int dest_len  = len;
                 for (i = 0; *(src + i) != '\0'; i++)
                             dest[dest_len + i] = *(src + i);
		 dest[dest_len + i] =  '\0';
		 p = dest;

                 return (p);
}
