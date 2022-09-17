#include "main.h"
/**
 * print_number - prints the number @n
 * @n: The number to be printed.
 * Return: Void.
 */
void print_number(int n)
{
	int f_1, s_2, t_3, f_4;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	f_1 = n % 10;
	f_4 = n / 1000;
	if (n >= 1000)
	{
		t_3 = (n % 1000 - n % 100) / 100;
		s_2 = (n % 100 - n % 10) / 10;
	}
	else if (n >= 100)
	{
		t_3 = n / 100;
		s_2 = (n % 100 - n % 10) / 10;
	}
	else if (n >= 10)
	{
		s_2 = n / 10;
	}
	if (n >= 1000)
		_putchar(f_4 + '0');
	if (n >= 100)
		_putchar(t_3 + '0');
	if (n >= 10)
		_putchar(s_2 + '0');
	_putchar(f_1 + '0');
	_putchar('\n');
}
