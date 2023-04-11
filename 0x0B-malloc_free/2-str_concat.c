#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: return pointer to strco or null if failed
 */
char *str_concat(char *s1, char *s2)
{
char *strco;
unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
/* Check if both strings are NULL*/
if (s1 == NULL && s2 == NULL)
{
return (NULL);
}

/* Get the lengths of both strings*/
len1 = s1 ? strlen(s1) : 0;
len2 = s2 ? strlen(s2) : 0;

/* Allocate memory for the new string*/
strco = malloc(sizeof(char) * (len1 + len2 + 1));

/* Check if memory allocation was successful*/
if (strco == NULL)
{
return (NULL);
}

/* Copy the first string to the new string*/
i = 0;
while (i < len1)
{
strco[i] = s1[i];
i++;
}

/* Concatenate the second string to the new string*/
j = 0;
while (j < len2)
{
strco[i] = s2[j];
i++;
j++;
}
/* Add the null terminator at the end of the new string*/
strco[i] = '\0';
return (strco);
}
