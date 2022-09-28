#include "main.h"

/**
 * _puts_recursion - prints a string followed by a newline.
 * @s: The address of the string to be printed.
 *
 * Return: vodi.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
