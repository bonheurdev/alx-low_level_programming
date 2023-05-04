#include "main.h"

/**
* flip_bits - returns the number of bits needed to flip
* to get from one number to another
* @n: first number
* @m: second number
*
* Return: number of bits needed to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
/*XOR of n and m gives the bits that are different*/
unsigned long int xor_result = n ^ m;

/* Initialize count to 0*/
unsigned int count = 0;

/* Iterate through each bit in xor_result*/
while (xor_result)
{
/* If the least significant bit is 1, increment count*/
count += xor_result & 1;
/* Right shift xor_result to check the next bit*/
xor_result >>= 1;
}

/* Return the count of bits that need to be flipped*/
return (count);
}
