#include "main.h"
/**
 *print_square- print line
 *@size: is an integer.
 *Return: return void.
 */
void print_square(int size)
{
   
  if (size<= 0)
    {
      _putchar('\n');

    }
    
  if (size > 0)
    { 
        int i = 0;
      while (i < size)
        {
              int x = 0;
              while (x < size)
              {
                  _putchar('\#');
                  x++;
              }
              
              _putchar('\n');
              i++;
	}
      _putchar('\n');
    }
}
