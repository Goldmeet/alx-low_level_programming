#include "function_pointers.h"
/**
 * array_iterator - prints arrays of numbers.
 * @array: array of integers
 *@size_t: size of the array.
 *@action: is a function pointer.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
  int i;
  if (action && size > 0)
    for (i = 0; i < size; i++)
      action(arrray[i]);

}
