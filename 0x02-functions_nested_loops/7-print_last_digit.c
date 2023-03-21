# include "main.h"
/**
 * print_last_digit - function that prints all alphabets 10 times
 *
 *@i: parameter takes in characte
 *
 *Return: Always 0.
 */
int print_last_digit(int i)
{
int j;

j = i % 10;
if (i < 0)
j = -j;
_putchar(j + '0');
return (j);
}
