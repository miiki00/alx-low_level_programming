#include "main.h"

/**
 * print_times_table - print the multiplication table for number n
 * @n: The number to print multiplication table for.
 *
 * Return: Void.
 */
void print_times_table(int n)
{
	int i, j, chk;

	if (n < 0 || n > 15)
		return;
	i = 0;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			chk = j;
			split_and_print((i * j), chk);

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}

/**
 * split_and_print - splits and print 3 digit numbers.
 * Description: Splits and prints 3 digit number if your resouces
 * are limited to only single character printer.
 * @n: Number to be splited and printed.
 * @chk: Checks a condition to help the formated printer.
 *
 * Return: Void.
 */
void split_and_print(int n, int chk)
{
	int n_fst, n_scd, n_trd;

	n_fst = n / 100;
	if (n < 100)
		n_scd = n / 10;
	else
		n_scd = ((n % 100) - (n % 10)) / 10;
	n_trd = n % 10;

	print_it(n_fst, n_scd, n_trd, chk);
}

/**
 * print_it - format and print 3 given integers
 * @f: 100th digit of the number.
 * @s: 10th digit of the number.
 * @t: 1th digit of the number.
 * @chk: Helps the formater to check some condition.
 *
 * Return: Void.
 */
void print_it(int f, int s, int t, int chk)
{

	if (f == 0 && s == 0 && t == 0 && chk == 0)
	{
		_putchar(t + '0');
	}
	else if (f == 0 && s == 0)
	{
		_putchar(f + ' ');
		_putchar(s + ' ');
		_putchar(t + '0');
	}
	else if (f == 0)
	{
		_putchar(f + ' ');
		_putchar(s + '0');
		_putchar(t + '0');
	}
	else
	{
		_putchar(f + '0');
		_putchar(s + '0');
		_putchar(t + '0');
	}
}
