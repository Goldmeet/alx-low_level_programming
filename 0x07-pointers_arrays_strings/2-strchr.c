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

    while (*s != '\0')
    {
        if (*s && *s == c)
            return (s);
        else
            return (NULL);
    }


}
