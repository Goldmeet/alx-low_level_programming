#include "main.h"
/**
 *print_alphabet_x10- print alphabet
 *
 *Return: Always return void.
 */
void print_alphabet_x10(void)
{
    
    int i;
    for (i = 0; i < 10; i++)
    {    int a = 97;
        for (; a <= 122; a++)
            _putchar(a);
        _putchar('\n');                        
    }
            
    
}
