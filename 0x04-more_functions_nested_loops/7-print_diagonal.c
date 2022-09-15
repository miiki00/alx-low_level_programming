#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * Description: Print the '\' character @n times.
 * @n: The quatity of the char '\' should be printed.
 *
 * Return: Void.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
