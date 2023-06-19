#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of byte
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched matched s byte.
 * else return NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}

s++;
}
return (NULL);
}
