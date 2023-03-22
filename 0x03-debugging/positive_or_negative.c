#include "main.h"
/**
 * positive_or_negative - Entry function
 *
 * @i: takes in the integer
 * Returns always 0.
 */
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive", i);
if (i < 0)
printf("%d is negative", i);
if (i == 0)
printf("%d is zero", i);
printf("\n");
}
