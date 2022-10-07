#include "main.h"

/**
 * array_range - creates an array and fills it with value
 * form @min to @max.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: The adress to the array
 * on error NULL.
 */
int *array_range(int min, int max)
{
	int i, j;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(*p) * (max - min + 2));
	if (p == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		p[j] = i;
	return (p);
}
