#include "main.h"

/**
 * _strncpy - function that copies a string.
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: number of bytes
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

/* Copy up to n characters from src to dest*/
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

/* Fill the remaining characters in dest with null terminator characters*/
for ( ; i < n; i++)
dest[i] = '\0';

/* Return a pointer to the resulting string dest*/
return (dest);
}
