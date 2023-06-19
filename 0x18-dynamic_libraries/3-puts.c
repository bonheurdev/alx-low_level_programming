#include "main.h"

/**
 * _puts - prints a string from characters
 *
 * @str: pointer to char
 * Return: nothing
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 1;
}
_putchar('\n');
}
