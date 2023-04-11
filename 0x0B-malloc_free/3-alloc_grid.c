#include <stdlib.h>
#include "main.h"



/**
 *alloc_grid - creates a 2D integer grid with a given width and height
 *@width: width of the grid
 *@height: height of the grid
 *Return: pointer to the newly created grid, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
/* Check if the given width or height is less than or equal to 0 */
if (width <= 0 || height <= 0)
return (NULL);

/* Allocate memory for the grid based on height */
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

i = 0;
j = 0;
do {
/** Allocate memory for each row in the grid */
grid[i] = malloc(width * sizeof(int));

/** Check if memory allocation for a row has failed */
if (grid[i] == NULL)
{
j = i - 1;

/** Free up memory for all previously allocated rows */
do {
free(grid[j]);
j--;
} while (j >= 0);

/** Free up memory for the grid itself */
free(grid);
return (NULL);
}
i++;
} while (i < height);

return (grid);
}
