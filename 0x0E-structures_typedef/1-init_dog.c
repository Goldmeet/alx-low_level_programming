#include "dog.h"
/**
 *init_dog- print dog details
 *@d: pointer
 *@name: string pointer
 *@age: float
 *@owner: string pointer
 *
 *Description: The function print details of a dog
 *
 *Return: return void.
 */




void init_dog(struct dog *d, char *name, float age, char *owner)
{
  if (d == NULL)
    return (1);

(*d).name = name;
(*d).age =age;
(*d).owner = owner;


}
