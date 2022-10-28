#include "main.h"

/**
 * get_bit - return a bit at a given index.
 * @n: The number to get bit for.
 * @index: The index of the bit.
 *
 * Return: The value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
		return (-1);
	return ((n & (1 << index)) ? 1 : 0);
}
