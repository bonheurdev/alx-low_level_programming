#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum exchange coins
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
int cents;
int coins_count = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);

while (cents > 0)
{
if (cents >= 25)
cents -= 25;
else if (cents >= 10)
cents -= 10;
else if (cents >= 5)
cents -= 5;
else if (cents >= 2)
cents -= 2;
else if (cents >= 1)
cents -= 1;
coins_count += 1;
}
printf("%d\n", coins_count);
return (0);
}
