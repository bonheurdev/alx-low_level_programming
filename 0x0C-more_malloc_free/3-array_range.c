#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of the range
 * @max: maximum value of the range
 *
 * Return: pointer to newly created array
 * or NULL if min > max or malloc fail
 */
int *array_range(int min, int max)
{
int *arr, i, size;

/* Check for invalid input*/
if (min > max)
return (NULL);

/* Determine size of array*/
size = max - min + 1;

/* Allocate memory for array*/
arr = malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);

/* fill array with values from min to max*/
i = 0;
do {
arr[i] = min;
min++;
i++;
} while (i < size);

return (arr);
}
