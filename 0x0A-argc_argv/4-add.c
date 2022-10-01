#include <stdio.h>
#include <stdlib.h>

/**
 *main- print sum of numbers.
 *@argc: argument count
 *@argv: argument vector.
 *Return: return 0
 */

int main(int argc, char  *argv[])
{
    int i;
    int sum = 0;

    if (argc == 1)
        printf("0\n");

    for (i = 1; i < argc; i++)
    {
        if(!((48 >= argv[i] <= 57)|| argv[i] == '-'))
        {

            printf("Error\n");
            return (0);
        }
        sum += atoi(argv[i]);

    }
    printf("sum '=' %d\n", sum);
    return (0);


}
