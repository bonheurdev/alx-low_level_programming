#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocates memory using malloc
 *
 * @b: amount of memory to allocate
 *
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
