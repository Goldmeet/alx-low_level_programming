#include<stdio.h>
/**
*main- print the size of variable types
*
*Return: always return 0
*/
int main(void) 
{
 char charType;
 int intType;
 long int lngIntType;
 long long int llintType;
 float flType;
 /* sizeof evaluates the size of a variable */
  printf("Size of a char: %zu byte(s)\n", sizeof(charType));
  printf("Size of an int: %zu byte(s)\n", sizeof(intType));
  printf("Size of a long int: %zu byte(s)\n", sizeof(lngIntType));
  printf("Size of a long long int: %zu byte(s)\n", sizeof(llintType));
  printf("Size of a float: %zu byte(s)\n", sizeof(flType));
  return (0);
}
