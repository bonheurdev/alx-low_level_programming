#include "main.h"

/**
 * _sqrt_recursion - recursive function returns check
 * perfect square root of a number
 * @n: number
 * Return: integer
 */
/*Recursive implementation of the square root function*/
int _sqrt_recursion(int n)
{
/*Check for special cases of 0, 1, and negative input numbers*/
if (n == 0)
return (0);
if (n == 1)
return (1);
if (n < 0)
return (-1);
/*Recursive function that uses a counter to find the square root of a number*/
return (naturalsqrt(n, 1));
}

/**
 * naturalsqrt - recursive function that calculate the square root
 *
 * @num: number
 * @i: Counter
 * Return: integer
 */
int naturalsqrt(int num, int i)
{
/*If the current counter squared is equal to the input number*/
/*return the counter and counter starts from 1*/
if (num == (i * i))
return (i);
/*If the current counter squared is less than the input number*/
/*call the function recursively with an incremented counter*/
else if (num > (i * i))
return (naturalsqrt(num, i + 1));
/*If the current counter squared is greater than the input number*/
/*return -1 to indicate that the input number */
/*does not have a perfect square root*/
else
return (-1);
}
