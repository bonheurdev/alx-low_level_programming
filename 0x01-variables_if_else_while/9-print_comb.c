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
for (i = 0 ; i < 10 ; i++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
return (0);
}
