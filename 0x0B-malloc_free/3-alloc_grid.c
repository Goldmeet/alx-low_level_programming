#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid- creat a 2dimensional array.
 *@width: column number
 *@height: row number.
 *Return: return p
 */
int **alloc_grid(int width, int height)
{
    int i , j;
    int **p;
    if (width <= 0 || height <= 0)
        return (NULL);
    p = (int**)malloc(sizeof(int*) * height);
    if (p == 0)
      return (NULL);
    for (i = 0; i < height; i++)
    {
        p[i] = (int*)malloc(sizeof(int) * width);
        if (p[i] == 0)
            return (NULL);
    }
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
            p[i][j] = 0;
    }
    return (p);
}
