#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */
void print_number(int n)
{
int n1;
n1 = n;
if (n < 0)
{/*if the number is negative, print a minus sign and make the number positive*/
_putchar('-');
n1 = -n;
}
if (n1 / 10 > 0)
{ /* if the number is more than one digit long, print the higher digits first*/
print_number(n1 / 10);
}
_putchar('0' + n1 % 10); /* print the last (lowest) digit of the number */
}
