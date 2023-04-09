# include "main.h"
/**
 * _abs - function that prints all alphabets 10 times
 *
 *@b: takes in integer
 *
 *Return: Always 0.
 */
int _abs(int b)
{
if (b < 0)
b = -(b);
else if (b > 0)
b = b;
return (b);
}
