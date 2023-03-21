#include <stdio.h>
/**
 * main - a program that finds and prints the first 98 Fibonacci numbers
 *
 *
 *Return: Always 0.
 */
int main(void)
{
int count;
unsigned long fib2 = 0, fib3 = 1, sum;
unsigned long fib2_half2, fib2_half3, fib3_half2, fib3_half3;
unsigned long half2, half3;

for (count = 0; count < 92; count++)
{
sum = fib2 + fib3;
printf("%lu, ", sum);
fib2 = fib3;
fib3 = sum;
}
fib2_half2 = fib2 / 10000000000;
fib3_half2 = fib3 / 10000000000;
fib2_half3 = fib2 % 10000000000;
fib3_half3 = fib3 % 10000000000;
for (count = 93; count < 99; count++)
{
half2 = fib2_half2 + fib3_half2;
half3 = fib2_half3 + fib3_half3;
if (fib2_half3 + fib3_half3 > 9999999999)
{
half2 += 1;
half3 %= 10000000000;
}
printf("%lu%lu", half2, half3);
if (count != 98)
printf(", ");
fib2_half2 = fib3_half2;
fib2_half3 = fib3_half3;
fib3_half2 = half2;
fib3_half3 = half3;
}
printf("\n");
return (0);
}
