#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D integer grid
 * @grid: pointer to the grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height == 0)
return;

i = 0;
do {
free(grid[i]);
i++;
} while (i < height);

free(grid);
}
