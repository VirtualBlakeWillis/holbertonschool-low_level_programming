#include "main.h"

/**
  * alloc_grid - allocates a grid in memory
  * @height: height of grid
  * @width: width of grid
  * Return: pointer to grid[0][0]
  */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (i = i; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	return (grid);

}
