#include <stdio.h>
# include "main.h"
/**
 * print_to_98 - function that prints all alphabets 10 times
 *
 * @n: parameter takes in character
 *Return: Always 0.
 */
void print_to_98(int n)
{
int j;

if (n >= 0 && n <= 98)
{
for (j = n; j <= 98; j++)
{
printf("%d", j);
if (j != 98)
{
printf(", ");
}
}
printf("\n");
}
else if (n < 0)
{
for (j = n; j <= 98; j++)
{
printf("%d", j);
if (j != 98)
{
printf(", ");
}
}
printf("\n");
}
else if (n > 98)
{
for (j = n; j >= 98; j--)
{
printf("%d", j);
if (j != 98)
{
printf(", ");
}
}
printf("\n");
}
else if (n == 98)
printf("%d, ", n);
}
