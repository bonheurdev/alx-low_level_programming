#include "main.h"

/**
 * _strlen_recursion - recursive function returns the length of a string
 *
 * @s: parameter string
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
/*base case: reached the end of string*/
if (*s == '\0')
{
return (0);
}
/*recursive case: add 1 and move to next character*/
return (1 + _strlen_recursion(s + 1));
}
