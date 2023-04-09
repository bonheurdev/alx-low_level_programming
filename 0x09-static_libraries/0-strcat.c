#include "main.h"

/**
 * _strcat- function that concatenates two strings.
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
char *result = dest; /* Save a pointer to the beginning of `dest`*/

/* Advance the `dest` pointer to the end of the string*/
while (*dest != '\0')
dest++;

/* Copy the contents of `src` onto the end of `dest`*/
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

/* Add a null terminator to mark the end of the concatenated string*/
*dest = '\0';

/* Return a pointer to the beginning of the concatenated string*/
return (result);
}
