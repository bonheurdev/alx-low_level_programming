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
/*cast the input pointer to an unsigned char pointer*/
unsigned char *p = (unsigned char *) s;

/*iterate over the memory region*/
while (n--)
{

/*assign the input byte to the current memory location*/
*p++ = (unsigned char) b;
}

/*return the input pointer*/
return (s);
}
