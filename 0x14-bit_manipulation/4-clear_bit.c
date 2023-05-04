#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: pointer to the unsigned long int value
* @index: index of the bit to clear, starting from 0
*
* Return: 1 if successful, -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
/* Check if the index is out of range*/
if (index >= (sizeof(unsigned long int) * 8))
/* Return -1 to indicate an error*/
return (-1);

/*
 *Use bitwise AND with the negation of the bit mask to
 * clear the bit at the given index
 */
*n &= ~(1UL << index);
/* Return 1 to indicate success*/
return (1);
}
