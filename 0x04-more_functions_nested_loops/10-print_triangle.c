#include "main.h"

/**
 * main - this is FIZZ BUZZ program
 *
 * Return: always 0
 */
int main(void)
{
int a;
int b;
int c;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < size; a++)
{
for (b = size - a; b > 1; b--)
{
_putchar(32);
}
for (c = 0; c <= a; c++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
