#include "main.h"

/**
 * _pow_recursion - recursive function that
 * returns the value of x raised to the power of y
 * @x: parameter base x
 * @y: parameter exponent y
 * Return: int
 */
int _pow_recursion(int x, int y)
{
/*return negative for negative y*/
if (y < 0)
return (-1);

/*base case: any number raised to 0 is 1*/
if (y == 0)
{
return (1);
}
/*recursive case: x * x^(y-1) */
return (x * _pow_recursion(x, y - 1));
}
