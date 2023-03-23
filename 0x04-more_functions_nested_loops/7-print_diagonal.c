#include "main.h"
/**
 *print_diagonal - function that draws a diagonal line in the terminal
 *@n: takes in n as integer
 *Return: always 0
 */
void print_diagonal(int n)
{
int c;
int d;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (c = 0; c <= n; c++)
{
for (d = 0; d <= c; d++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
