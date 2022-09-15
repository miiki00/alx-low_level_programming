#include "main.h"

/**
 * print_triangle - print an equilateral triangle
 * Description: With a base of of @n.
 * @n: The mesurment of the traingle.
 *
 * Return: Void.
 */
void print_triangle(int n)
{
	int i, j, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= (n - i); j++)
			{
				_putchar(' ');
			}
			for (k = n; k > (n - i); k--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
