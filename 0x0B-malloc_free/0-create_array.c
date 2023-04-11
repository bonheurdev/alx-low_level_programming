#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function use malloc and
 *that creates an array of chars
 * @size: size to use when allocating
 * @c: character for array
 *
 * Return: returns pointer to array or null when failed
 */
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;


ar = (char *) malloc(sizeof(char) * size);

if (ar == NULL || size == 0)
return (NULL);

i = 0;
do {
ar[i] = c;
i++;
} while (i < size);

ar[i] = '\0';

return (ar);
}
