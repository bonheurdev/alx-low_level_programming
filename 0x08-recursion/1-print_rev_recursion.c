#include "main.h"

/**
 * _print_rev_recursion - function recursion to reverse s
 *
 * @s: parameter string
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
/*1. check if the current character is not null*/
/*2. call the function with the next character*/
/*3. print the current character*/
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
