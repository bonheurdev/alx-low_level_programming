#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:'this progam will print digits with putchar'
 *
 * Return: 0(success)
 */
int main(void)
{
int i;
int j;
for (i = 0 ; i < 9 ; i++)
{
for (j = 1; j < 10; i++)
{
if (i < j && i != j)
putchar(i + '0');
putchar(j + '0');
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
