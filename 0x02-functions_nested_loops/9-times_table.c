#include "main.h"

/**
 * times_table - prints the multiplication table until 9
 *
 * Return: void.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		j = 0;
		for (; j <= 9; j++)
		{
			if ((i * j) == 0 && j == 0)
			{
				_putchar(((i * j) % 10) + '0');
			}
			else if (((i * j) / 10) == 0)
			{
				_putchar(((i * j) / 10) + ' ');
				_putchar(((i * j) % 10) + '0');
			}
			else
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
