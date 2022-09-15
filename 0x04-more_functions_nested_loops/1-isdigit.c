#include "main.h"

/**
 * _isdigit - checks if @c is a number
 * @c: The character to be checked.
 *
 * Return: If @c is a number 1 else 0.
 */
int _isdigit(int c)
{
	int i;

	if (c > 47 && c < 58)
		i = 1;
	else
		i = 0;

	return (i);
}
