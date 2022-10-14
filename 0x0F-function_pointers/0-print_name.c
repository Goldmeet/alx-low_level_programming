#include "function_pointers.h"


/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name - prints a name as is
 * @name: name of the person
 *@f: a pointer to a function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
f = print_name_as_is(char* name);
f(name);

}
