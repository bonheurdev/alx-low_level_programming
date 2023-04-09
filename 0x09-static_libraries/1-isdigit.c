#include "main.h"
/**
 * _isdigit - function that checks for digit
 *@i: takes in integer
 *Return: returns 1 for digits 0 otherwise
 */
int _isdigit(int i)
{
if (i >= 48 && i <= 57)
{
return (1);
}
return (0);
}
