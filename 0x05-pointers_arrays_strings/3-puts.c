#include "main.h"

/**
 * _puts - print the strint located at @str
 * @str: The address of the string to be printed.
 *
 * Return: Void.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
