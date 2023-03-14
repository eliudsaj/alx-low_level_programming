#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 *
 * @grid: pointer to the 2D array to be freed
 * @height: the height of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	for (height -= 1; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
