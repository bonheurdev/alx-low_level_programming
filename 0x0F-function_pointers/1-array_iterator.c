#include <stddef.h> /*for size_t*/

/**
 * array_iterator - applies a function to each element of an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to apply
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
/* apply the function to the i-th element of the array */
(*action)(array[i]);
}
}
