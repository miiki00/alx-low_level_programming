#include "main.h"

/**
 * _strcat - concatenates to strings by appending string located @src
 * to the string located @dest.
 * @dest: The location of the string to appended on.
 * @src: The location of the string to be appended.
 *
 * Return: The location of the full string.
 */
char *_strcat(char *dest, char *src)
{
	int len, sum_len, i;

	i = 0;
	len = _strlen(dest);
	sum_len = len + _strlen(src);

	for (; len <= sum_len; len++)
	{
		*(dest + len) = *(src + i);
		i++;
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
