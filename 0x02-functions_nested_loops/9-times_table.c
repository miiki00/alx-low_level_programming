#include "main.h"

/**
 * times_table - prints the multiplication table until 9
 *
 * Return: void.
 */
void times_table(void)
{
	int i, j, n, nf, ns;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{

			n = i * j;
			nf = n / 10;
			ns = n % 10;

			if (nf == 0)
			{
				_putchar(nf + ' ');
				_putchar(ns + '0');
			}
			else
			{
				_putchar(nf + '0');
				_putchar(ns + '0');
			}

			if (j != 9)
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
