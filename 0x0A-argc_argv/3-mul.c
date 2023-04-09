#include <stdio.h>
#include <stdlib.h>

/**
 * main - mulpy two integers using arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0.
 */

int main(int argc, char *argv[])
{

int n1;
int n2;
int mul;
(void)mul;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
printf("%d\n", (n1)*(n2));
}
return (0);
}
