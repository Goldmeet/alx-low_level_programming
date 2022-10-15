#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print all it parameter
 *@separator:  separatethe element of print_num
 *@n: number of optional arguement
 *
 * Return: return void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
  unsigned int i;
  va_list ap;

  va_start(ap, n);
  for (i = 0; i < n; i++)
    {
      if (separator == NULL)
	printf("%d", va_arg(ap, int));
      printf("%d%s",  va_arg(ap,int), separator);

    }
  va_end(ap);
  printf("\n");



}
