#include "function_pointers.h"

/**
 *in_index - check if a number is equal to 98
 * @array: array of integer
 *@size: size of the array
 *@cmp:funtion pointer
 *
 * Return: return an integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
  int i;
  if (size <= 0)
    return (-1);
  if (cmp && (array && size > 0))
    {
      for (i = 0; i < size; i++)
	{
	  cmp(array[i]);
	  return (i);
	}
    }
  return (-1);

}
