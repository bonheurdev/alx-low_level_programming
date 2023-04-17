#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable type dog struct
 *
 * @d: variable pointer to struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
