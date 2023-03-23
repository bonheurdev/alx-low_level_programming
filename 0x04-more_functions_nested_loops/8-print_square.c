#include "main.h"
/**
 *print_square - function that draws a diagonal line in the terminal
 *@size: takes in n as integer
 *Return: always 0
 */
void print_square(int size)
{
int c;
int d;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (c = 0; c < size; c++)
{
for (d = 0; d < size; d++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
