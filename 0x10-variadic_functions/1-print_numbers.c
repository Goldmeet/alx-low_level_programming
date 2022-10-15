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
  int num;
  va_list my_num;

  va_start(my_num, n);
  for (i = 0; i < n; i++)
    {
      num = va_arg(my_num,int);
      printf("%d", num, int));
      if (separator)
	printf("%s", separator);
    }
  
  va_end(my_num);
  printf("\n");



}
