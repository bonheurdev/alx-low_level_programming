#include <stdlib.h>
#include "dog.h"

/**
 * my_strlen - gets the length of the given string
 *
 * @s: parameter string
 *
 * Return: length of string s
 */

int my_strlen(const char *s)
{
int len = 0;
while (*s++)
{
len++;
}
return (len);
}
/**
 * my_strncpy - a function that copy string to given dest
 *
 * @src: string to copy
 * @dest: a copy made
 * @n: parameter n
 * Return: a pointer to destination string
 */

char *my_strncpy(char *dest, const char *src, size_t n)
{
size_t i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
/**
 * new_dog - a function that creates a new dog
 * with given name, age, owner
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog
 * NULL if allocation fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int name_len;
int owner_len;
dog_t *new_dog;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}

name_len = my_strlen(name);
new_dog->name = malloc(name_len + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
my_strncpy(new_dog->name, name, name_len + 1);

owner_len = my_strlen(owner);
new_dog->owner = malloc(owner_len + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
my_strncpy(new_dog->owner, owner, owner_len + 1);

new_dog->age = age;

return (new_dog);
}
