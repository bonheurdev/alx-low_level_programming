#include "main.h"

/**
 * factorial - recursive function for factorial of a given number.
 *
 * @n: parameter of number n
 *
 * Return: integer
 */
int factorial(int n)
{
if (n < 0)/*base case: n is negative*/
return (-1);
if (n == 0)
{
/*base case: 0! = 1 */
return (1);
}
return (n * factorial(n - 1));/*recursive case: n! = n * (n-1)!*/
}
