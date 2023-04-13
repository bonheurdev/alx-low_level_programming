#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string
 *
 * @s: the string to get the length of
 *
 * Return: the length of @s
 */
unsigned int _strlen(char *s)
{
unsigned int len = 0;

while (s[len] != '\0')
{
len++;
}

return (len);
}


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
 * string_nconcat - function that concatenates two strings
 *
 * @s1: parameter string 1
 * @s2: parameter string 2
 * @n: bytes of @s2 to add to @s1
 *
 * Return: new string as result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int l1, l2, i;
char *result;
/*treat NULL as empty string*/
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

l1 = _strlen(s1);
l2 = _strlen(s2);

/*set n to length of s2*/
if (n >= l2)
n = l2;

result = malloc(l1 + n + 1);
if (result == NULL)
return (NULL);

/*add s1 to result*/
_memcpy(result, s1, l1);
/*add s2 n bytes to result*/
for (i = 0; i < n; i++)
{
result[l1 + i] = s2[i];
}
result[l1 + n] = '\0';

return (result);
}
