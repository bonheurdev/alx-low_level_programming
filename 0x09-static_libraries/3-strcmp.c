#include "main.h"

/**
 * _strcmp - function that compares two strings.
 *
 * @s1: pointer to char source 1
 * @s2: pointer to char source 2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
/* Iterate over the characters in the strings until a difference is found*/
while (*s1 == *s2)
{
/* If the end of either string is reached,*/
/* return 0 to indicate they are equal */
if (*s1 == '\0' || *s2 == '\0')
return (0);

/* Move to the next character in each string*/
s1++;
s2++;
}

/* If the characters at the current position in the strings are not equal,*/
/*return the difference in their ASCII values*/
return ((*s1 - *s2));
}
