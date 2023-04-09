#include <stdio.h>
#include <stdlib.h>

/**
 * main - add arguments of positive numbers
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
int i;
int addition;
if (argc == 1)
printf("0\n");
else
{
for (i = 1; i < argc; i++)
{
if (!atoi(argv[i]))
{
printf("Error\n");
return (1);
}
else
addition += atoi(argv[i]);
}
printf("%d\n", addition);
}
return (0);
}
