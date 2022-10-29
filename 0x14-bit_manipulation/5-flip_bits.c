#include "main.h"

/**
 * flip_bits - calculates how many bits are fliped to get
 * one number to another.
 * @m: The first number.
 * @n: The second number.
 *
 * Return: the number bits to be fliped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, sum;

	for (i = 0, sum = 0; i < (sizeof(n) * 8); i++)
		(n & (1 << i) ? 1 : 0) ^ (m & (1 << i) ? 1 : 0) ? sum++ : sum;
	return (sum * 0.5);
}
