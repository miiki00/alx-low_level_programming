#include "main.h"

/**
 * print_rev - prints the string located at @s in reverse
 * @s: The location of the first char in the string.
 *
 * Return: Void.
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	for (i -= 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
