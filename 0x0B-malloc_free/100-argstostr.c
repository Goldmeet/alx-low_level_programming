#include "main.h"
#include <stdlib.h>

/**
 *argstostr- print arg of char..
 *@ac: argument count
 *@av: argument vector.
 *Return: return 0
 */
char *argstostr(int ac, char **av)
{
    char *p;
    int i;
    if(ac == 0 || *av == '\0')
        return (NULL);
    p = malloc(sizeof(char*) * ac+1);
    if(p == NULL)
        return (NULL);
    for(i = 0; i < ac; i++)
        p[i] = *av++;
    p[i + 1] = '\0';
    return (p);


}
