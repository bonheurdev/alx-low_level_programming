#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:'this progam will print characters using putchar'
 *
 * Return: 0(success)
 */
int main(void)
{
int i;
for (i = 'a' ; i <= 'z' ; i++)
putchar(i);
for (i = 'A' ; i <= 'Z' ; i++)
putchar(i);
putchar('\n');
return (0);
}
