#include "main.h"

/**
 * free_grid - frees a memory located for a 2d array with
 * an elements number of @height.
 * @grid: The adress to be freed.
 * @height: The number of rows.
 *
 * Return: Void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
