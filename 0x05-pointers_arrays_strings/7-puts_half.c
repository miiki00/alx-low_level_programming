#include "main.h"

/**
 * _strlen - countes the length of a string
 * @s: Pointer to the first value of the string.
 *
 * Return: Void.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * puts_half - prints after the half of the string
 * @str: The address of the string to be printed.
 *
 * Return: Void.
 */
void puts_half(char *str)
{
	int i, len;

	len = _strlen(str);

	if (len % 2 != 0)
	{
		len -= 1;
	}
	for (i = (len / 2); i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
