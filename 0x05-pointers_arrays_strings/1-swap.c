#include "main.h"

/**
 * swap_int - swaps the values
 *
 * @a: points to an int a
 * @b: points to other int b
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
