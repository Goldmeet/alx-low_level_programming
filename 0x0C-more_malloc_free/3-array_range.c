#include "main.h"
#include <stdlib.h>

/**
 * array_range - prints arrays of number
 * @min: the minimum integer
 * @max: the maximum integer
 *
 * Return: return an integer pointer.
 */
int *array_range(int min, int max)
{
        unsigned int i, range;
        int *arr;
        if ( min > max)
                return (0);
        range = max - min
        arr = malloc(sizeof(arr) * (range + 1));
        if (arr == 0)
                return (0);
        for (i = 0; (min + i) <= max; i++)
                arr[i] = min;
        return (arr);

}
