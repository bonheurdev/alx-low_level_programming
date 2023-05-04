#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: pointer to the unsigned long int value
* @index: index of the bit to set, starting from 0
*
* Return: 1 if successful, -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
/*Check if the index is out of range*/
if (index >= (sizeof(unsigned long int) * 8))
/* Return -1 to indicate an error*/
return (-1);

/* Use bitwise OR operation to set the bit at the given index to 1*/
*n |= (1UL << index);

/* Return 1 to indicate success*/
return (1);
}
