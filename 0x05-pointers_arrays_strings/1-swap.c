#include "main.h"

/**
 * swap_int - swaps the value of @a and @b
 * @a: The address of the var to be swaped with @b.
 * @b: The address of the var to be swaped with @a.
 *
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
