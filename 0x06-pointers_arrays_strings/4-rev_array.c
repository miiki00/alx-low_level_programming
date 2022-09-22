#include "main.h"

/**
 * reverse_array - revese the content of an array.
 * @a: The array to be reversed.
 * @n: Number of elements in the array.
 *
 * Return: Void.
 */
void reverse_array(int *a, int n)
{
	int j, k, l;

	n = n - 1;

	for (j = 0, k = n; j <= n / 2; j++, k--)
	{
		l = a[k];
		a[k] = a[j];
		a[j] = l;
	}
}
