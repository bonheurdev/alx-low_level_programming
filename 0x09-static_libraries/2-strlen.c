#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: pointer of string
 * Return: int i
 */
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i += 1;
}
return (i);
}
