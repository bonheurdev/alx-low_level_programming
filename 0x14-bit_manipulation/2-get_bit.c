#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: unsigned long int value
* @index: index of the bit to get, starting from 0
*
* Return: value of the bit at the given index, or -1 if an error occurred
*/
int get_bit(unsigned long int n, unsigned int index)
{
/*Create a mask with only the bit at the given index set to 1*/
unsigned long int mask = 1UL << index;
/* Check if the index is out of range*/
if (index >= (sizeof(unsigned long int) * 8))
/* Return -1 to indicate an error*/
return (-1);
/*Use bitwise AND operation to check if the corresponding bit in n is set (1)*/
if ((n & mask) != 0)
/* If yes, return 1 (true)*/
return (1);
else
/* Otherwise, return 0 (false)*/
return (0);
}
