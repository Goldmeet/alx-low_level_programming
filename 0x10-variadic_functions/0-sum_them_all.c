#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - check the code
 *@n: arguemebt count.
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{

  unsigned int i;
  int sum = 0;
  va_list my_sum;

  if (n == 0)
    return (0);

  va_start(my_sum,n);
  for (i = 0; i < n; i++)
    sum += va_arg(my_sum,int);
  va_end(my_sum);
  return (sum);
 

}
