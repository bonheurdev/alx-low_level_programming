#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
char *op;

if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op = argv[2];

if ((*op == '/' || *op == '%') && num2 == 0)
{
printf("Error\n");
return (100);
}

result = get_op_func(op)(num1, num2);
printf("%d\n", result);

return (0);
}
