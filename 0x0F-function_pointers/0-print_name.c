#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: name of the person
 *@f: a pointer to a function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (f)
  f(name);

}
