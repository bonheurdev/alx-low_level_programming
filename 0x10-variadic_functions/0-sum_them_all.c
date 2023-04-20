#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of arguments passed to the function
 *
 * Return: The sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sum = 0;

/* Initialize the argument list */
va_start(args, n);

/* Loop through the arguments and sum them up */
for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}

/* Clean up the argument list */
va_end(args);

/* Return the sum */
return (sum);
}
