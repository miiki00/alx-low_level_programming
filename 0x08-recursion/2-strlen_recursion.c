#include "main.h"

/**
 * _strlen_recursion - counts the length of a string.
 * @s: The address of the string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
