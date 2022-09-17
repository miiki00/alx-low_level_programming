#include "main.h"
/**
 * print_number - prints the number @n
 * @n: The number to be printed.
 * Return: Void.
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n >= 1000)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n % 1000 - n % 100) / 100) + '0');
		_putchar(((n % 100 - n % 10) / 10) + '0');
	}
	else if (n >= 100)
	{
		_putchar((n / 100) + '0');
		_putchar(((n % 100 - n % 10) / 10) + '0');
	}
	
	else if (n >= 10)
	{
		_putchar((n / 10) + '0');
	}
	_putchar((n % 10) + '0');
}
