#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned char *p = (unsigned char *) s;
while (n--)
{
*p++ = (unsigned char) b;
}

return (s);
}
