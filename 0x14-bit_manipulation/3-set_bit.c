#include "main.h"

/**
 * set_bit - set a bit at given index to have a value of 1.
 * @n: The address of the number.
 * @index: The index of the bit to be seted to 1.
 *
 * Return: on success 1 on error -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
		return (-1);
	*n = *n | (1 << index);
	return (*n | (1 << index) ? 1 : -1);
}
