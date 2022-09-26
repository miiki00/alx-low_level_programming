#include "main.h"

/**
 * _memset - fills the first @n bytes of the array located at @s
 * with the constant @b.
 * @s: The location of the array.
 * @b: The constant that @n bytes of array located @s to be filled with.
 * @n: The number of bytes to be filled with @b.
 *
 * Return: The adress of the array.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
