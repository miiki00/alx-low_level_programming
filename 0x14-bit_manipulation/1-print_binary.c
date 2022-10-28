#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: The number to print binary representaion for.
 *
 * Return: Void.
 */
void print_binary(unsigned long int n)
{
	unsigned int i;
	int j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 1 << 31, j = 0; i > 0; i = i / 2)
		(n & i) ? j = _putchar('1') : j ? _putchar('0') : j;
}
