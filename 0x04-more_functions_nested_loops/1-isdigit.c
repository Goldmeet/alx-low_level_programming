#include "main.h"
/**
 *isdigit- check digit numbers.
 *@c: is an integer value of ascci
 *Return: Always return a value
 */
int _isdigit(int c)
{
  if (c >= 48 && c <= 57)
    return (1);
  else
    return (0);

}
