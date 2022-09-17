#include "main.h"
/**
 * print_triangle - prints triangle using "#" character of a given size
 *@size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
    int i, a, b;
        if(size > 0)
        {
                    for(i = 1; i <= size; i++)
                    {
                         if(i == size)
                         {
                            for(b = 0; b <= size; b++)
                                _putchar('#');
                         }
			 else
			{
			  a = 0;
			  for (;a < size-i; a++)
		          {
                                _putchar(' ');

                          }
                          a = 0;
                          for (;a < i; a++)
                           {
                               _putchar('#');

                           }
			}
			 _putchar('\n');
			
                    }

        }
        else
        {
                _putchar('\n');
        }
}
