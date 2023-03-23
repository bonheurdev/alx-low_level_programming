#include "main.h"

/**
 * main - this is FIZZ BUZZ program
 *
 * Return: always 0
 */
int main(void)
{
int i;

for (i = 0; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FIZZBUZZ");
}
else if (i % 3 == 0)
{
printf("FIZZ");
}
else if (i % 5 == 0)
{
printf("BUZZ");
}
else
{
printf("%d", i);
}
if (x != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
