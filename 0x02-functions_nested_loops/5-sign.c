#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number to be evaluated
 *
 * Return: if n is + return 1.
 * If n is 0 return 0. and if n is - return -1.
 */
int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		ret = 1;

		_putchar('+');
	}
	else if (n == 0)
	{
		ret = 0;

		_putchar('0');
	}
	else
	{
		ret = -1;

		_putchar('-');
	}

	return (ret);
}
