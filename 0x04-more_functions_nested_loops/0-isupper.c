#include "main.h"

/**
 * _isupper - checks if  letter is upper case
 * @c: The character to be checked.
 *
 * Return: If uppercase 1 else 0.
 */
int _isupper(int c)
{
	int i;

	if (c > 64 && c < 91)
		i = 1;
	else
		i = 0;

	return (i);
}
