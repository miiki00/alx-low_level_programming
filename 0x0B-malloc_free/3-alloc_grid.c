#include "main.h"

/**
 * alloc_grid - creates an 2d array with @height number
 * of rows and @height number of columon.
 * @width: The number of columons.
 * @height: The number of rows.
 *
 * Return: a pointer to the allocated memory for the 2d array
 * on error NULL.
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
