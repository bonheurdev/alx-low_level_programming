#include "main.h"
#include <stddef.h>

/**
 * _strncat- function that concatenates two strings.
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: number of bytes to receive
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
/*Create copy of dest*/
char *s1 = dest;
/*Find the end of the destination string*/
while (*s1 != '\0')
{
s1++;
}
/*Now append the source string characters*/
/*until not get null character of src or n != 0*/
while (n--)
{
if (!(*s1++ == *src++))
{
return (dest);
}
}
/*Append null character in the last*/
*s1 = '\0';
return (dest);
}
