#include "main.h"

/**
 * _strncpy - copies the first @n bytes of string locatd @src to the
 * first n bytes of the string located @dest.
 * @dest: The location of the string to copy the string located @src.
 * @src: The location of the string to be copied to the
 * array located @dest.
 * @n: The number of bytes to be copied.
 *
 * Return: The adress of the dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len;

	len = _strlen(src);

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
		{
			for (; i < n; i++)
			{
				*(dest + i) = '\0';
			}
		}
	}

	return (dest);
}

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
