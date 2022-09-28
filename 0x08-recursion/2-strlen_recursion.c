#include "main.h"

/**
 * _strlen_recursion - counts the length of a string.
 * @s: The address of the string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 1;
	if (*s == '\0')
		return (0);
	s++;
	return (i + _strlen_recursion(s));
}
