#include "main.h"

/**
 * is_prime_number - recursive function for implemantation
 * if n is a prime return 1 if not 0
 * @n: number
 *
 * Return: integer
 */
int is_prime_number(int n)
{
/* Check if the input number is less than or equal to 1*/
if (n <= 1)
return (0);
/* Call the recursive helper function to check if the number is prime */
return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - recursive function that
 * that checks is n is prime
 *
 * @n: number
 * @i: Counter
 * Return: integer
 */
int is_prime_helper(int n, int i)
{
/* Base case: if i is equal to n, the number is prime*/
if (i == n)
return (1);
/* Check if n is divisible by i; if so, it's not a prime number */
if (n % i == 0)
return (0);
/* Recursively call the helper function with i+1 */
return (is_prime_helper(n, i + 1));
}
