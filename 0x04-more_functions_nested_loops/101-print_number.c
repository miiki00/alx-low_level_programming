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
		print_neg(n);
	}
	else if (n >= 1000)
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
	if (n >= 0)
		_putchar((n % 10) + '0');
}

/**
 * print_neg - print the negative number @n
 * @n: The number to be printed.
 *
 * Return: Void.
 */
 void print_neg(int n)
 {
 	_putchar('-');
	if(n <= -1000)
	{
		_putchar(((n / 1000) * -1) + '0');
		_putchar((((n % 1000 - n % 100) / 100) * -1) + '0');
		_putchar((((n % 100 - n % 10) / 10) * -1) + '0');
	}
	else if (n <= -100)
	{
		_putchar(((n / 100) * -1) + '0');
		_putchar((((n % 100 - n % 10) / 10) * -1) + '0');
	}
	else if (n <= -10)
	{
		_putchar(((n / 10) * -1) + '0');
	}

		_putchar(((n % 10) * -1)+ '0');
 }
