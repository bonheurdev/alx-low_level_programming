#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:'this program will generate and check a random number'
 *
 * Return: 0(success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n < 0.0)
printf("%d is negative\n", n);
if (n == 0.0)
printf("%d is zero\n", n);
if (n > 0.0)
printf("%d is positive\n", n);
return (0);
}
