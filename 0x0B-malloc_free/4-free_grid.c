#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees alloc_grid
 * @height: height of array
 * @grid: 2d array
 *
 * Return: always 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
