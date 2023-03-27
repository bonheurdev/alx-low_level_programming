#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: String to print
 * Return: nothing.
 */
void print_rev(char *s)
{
int i;
int result = 0;

for (i = 0; s[i] != '\0'; i++)
result++;
for (i = result; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
