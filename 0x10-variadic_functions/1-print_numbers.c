#include <stdarg.h>
#include <stdio.h>

#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
/*declare a va_list object*/
va_list args;
unsigned int i;
int num;
/*initialize the va_list object*/
va_start(args, n);

for (i = 0; i < n; i++)
{
/*get the next argument from va_list*/
num = va_arg(args, int);
printf("%d", num);

if (i != n - 1 && separator != NULL)
/*print separator after the number, if it's not the last one*/
printf("%s", separator);

}
/*print a new line at the end of the function*/
printf("\n");
/*clean up the va_list object*/
va_end(args);
}
