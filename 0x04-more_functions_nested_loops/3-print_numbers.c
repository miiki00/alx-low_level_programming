#include "main.h"

/**
 * print_numbers - prints numbers form 0 to 0.
 *
 * Return: Void.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar('0' + i);
	_putchar('\n');
}
