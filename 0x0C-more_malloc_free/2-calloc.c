#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte to fill memory with
 * @n: number of bytes to fill
 *
 * Return: pointer to memory area @s
 */
void *_memset(void *s, int b, unsigned int n)
{
unsigned char *p = s;

while (n--)
*p++ = (unsigned char) b;
return (s);
}

/**
 * _calloc - function that allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory, or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)    
{
void *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
/*set memory to zero*/
_memset(ptr, 0, nmemb * size);
return (ptr);
}
