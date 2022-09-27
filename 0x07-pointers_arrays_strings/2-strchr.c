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
    int i;
    for (i = 0; *(s + i) != '\0'; i++)
        if (s[i] == c)
            return (s);
        else
            return (NULL);

}
