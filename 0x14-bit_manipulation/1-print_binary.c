#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: The number to print binary representaion for.
 *
 * Return: Void.
 */
void print_binary(unsigned long int n)
{
	double i;
	unsigned int k;
	int j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = k = 1 << 31, j = 0; k > 0; i = k = i * 0.5)
		(n & k) ? j = _putchar('1') : j ? _putchar('0') : j;
}
