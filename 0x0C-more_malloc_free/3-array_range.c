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
	int i, j, add;
	int *p = NULL;

	if (min > max)
		return (NULL);
	if (min == max)
		add = 1;
	p = malloc(sizeof(int) * (max - min + add));
	if (p == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		p[j] = i;
	return (p);
}
