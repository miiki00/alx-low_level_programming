#include "main.h"

/**
 * clear_bit - set a bit at given index to have a value of 0.
 * @n: The address of the number.
 * @index: The index of the bit to be seted to 0.
 *
 * Return: on success 1 on error -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
		return (-1);
	*n = *n & ~(1 << index);
	return (*n | (1 << index) ? 1 : -1);
}
