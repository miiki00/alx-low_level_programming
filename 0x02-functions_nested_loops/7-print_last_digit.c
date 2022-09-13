#include "main.h"

/**
 * print_last_digit - computes last digit of n
 * @n: Number to be computed.
 *
 * Return: Last digit of n.
 */
int print_last_digit(int n)
{
	int ld, prld;

	ld = n % 10;

	if (ld < 0)
		ld *= -1;

	prld = 48 + ld;

	_putchar(prld);

	return (ld);
}
