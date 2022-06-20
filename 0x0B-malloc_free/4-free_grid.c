#include "main.h"

/**
  * free_grid - frees the memory of a 2d array
  * @grid: 2d array
  * @height: height of grid
  * Return: only if grid == null
  */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = height; i >= 0; i--)
		free(grid[i]);
	free(grid);
}
