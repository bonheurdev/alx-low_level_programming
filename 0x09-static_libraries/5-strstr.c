#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 * of the located substrin
 * If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return ((char *) haystack);
}
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*h != '\0' && *n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return ((char *) haystack);
}
haystack++;
}
return (NULL);
}
