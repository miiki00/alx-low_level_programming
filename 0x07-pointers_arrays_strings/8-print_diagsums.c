#include "main.h"

/**
 * print_diagsums - prints the sum of the diagonl elts of
 * an @size by @size matrix.
 * @a: The address of the array.
 * @size: The size of the array.
 *
 * Return: Void.
 */
void print_diagsums(int *a, int size)
{
	int i, j, cp, diagsum_1, diagsum_2;

	if (size % 2 == 0)
		cp = (size / 2) + 1;
	else
		cp = (size / 2);
	diagsum_1 = diagsum_2 = *(a + (size * cp + cp));
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == cp && j == cp)
				break;
			if (i == j)
				diagsum_1 = diagsum_1 + *(a + (size * i + j));
			else if (size - 1 - i == j)
				diagsum_2 = diagsum_2 + *(a + (size * i + j));
		}
	}
	printf("%d, %d\n", diagsum_1, diagsum_2);
}
