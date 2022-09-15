#include "main.h"

/**
 * print_line - prints a horizontal line.
 * Descritption: Prints the character '_' @n times
 * followed by a new line.
 * @n: The quantity where the char '_' should be printed.
 *
 * Return: Void.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
			if (i == n - 1)
				_putchar('\n');
		}
	}
}
