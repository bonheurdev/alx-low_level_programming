#include "main.h"
#include <stdlib.h>


/**
 * _memcpy - function that copies @n bytes from @src to @dest
 *
 * @dest: the destination buffer to copy to
 * @src: the source buffer to copy from
 * @n: the number of bytes to copy
 *
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: pointer to the reallocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

/* If new_size is zero, free ptr and return NULL */
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

/* If ptr is NULL, equivalent to malloc(new_size) */
if (ptr == NULL)
{
return (malloc(new_size));
}

/* If new_size is equal to old_size, do not do anything */
if (new_size == old_size)
{
return (ptr);
}
/* Allocate new block of memory */
new_ptr = malloc(new_size);
/* If malloc fails, return NULL */
if (new_ptr == NULL)
{
return (NULL);
}
/* Copy contents from old memory block to new memory block */
if (new_size > old_size)
{
_memcpy(new_ptr, ptr, old_size);
}
else
{
_memcpy(new_ptr, ptr, new_size);
}
/* Free old memory block */
free(ptr);
/* Return pointer to newly allocated memory block */
return (new_ptr);
}
