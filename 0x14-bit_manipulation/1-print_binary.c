#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: unsigned long int value to be printed in binary
*
* Return: void
*/
void print_binary(unsigned long int n)
{
/* Create a mask with only the leftmost bit set to 1*/
unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
/* Flag to keep track of whether a non-zero bit has been encountered*/
int flag = 0;

while (mask)
{
/*Use bitwise AND operation to check if the corresponding bit in n is set (1)*/
if (n & mask)
{
/*If yes, print '1'*/
_putchar('1');
/*Set the flag to indicate that a non-zero bit has been encountered*/
flag = 1;
}
/*If the flag is set or it's the rightmost bit (least significant bit)*/
else if (flag || mask == 1)
/* Print '0' to avoid leading zeros*/
_putchar('0');
/* Shift the mask one bit to the right*/
mask >>= 1;
}
s
