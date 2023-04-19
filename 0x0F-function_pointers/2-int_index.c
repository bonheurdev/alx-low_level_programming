#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a comparison function
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of first element for which the cmp function does not return 0,
 * or -1 if no element matches or size is less than or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

/* Check if array and cmp are not NULL */
if (array && cmp)
{
/* Loop through each element of the array */
for (i = 0; i < size; i++)
{
/* Apply the comparison function to the current element */
if (cmp(array[i]))
/* If cmp returns a non-zero value, return the index of the element */
return (i);
}
}
/* If no element matches or size is less than or equal to 0, return -1 */
return (-1);
}
