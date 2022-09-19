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
 * puts2 - prints even indexes of string located @str
 * @str: The address of the string to be printed.
 *
 * Return: Void.
 */
void puts2(char *str)
{
	int i, len;

	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
}
