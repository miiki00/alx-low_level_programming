#include "main.h"

/**
 * print_array - print @n elemets of the array located @a
 * @a: The adress of the array to be printed.
 * @n: The number of elements that should be printed.
 *
 * Return: Void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("%d\n", *(a + i));
}
