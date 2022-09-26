#include "main.h"

/**
 * _memcpy - copies the first @n bytes of string located at @src to
 * a string located @dest.
 * @src: The source string address.
 * @dest: The destnation string address.
 * @n: Number of by to be copied.
 *
 * Return: The location of @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
