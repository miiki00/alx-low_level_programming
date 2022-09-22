#include "main.h"

/**
 * _strncat - concatenates to strings by appending n numbers of byte
 * from the string located @src to the string located @dest.
 * @dest: The location of the string to appended on.
 * @src: The location of the string to be appended.
 * @n: Numbers of bytes to take from @src and append on
 * string located @dest.
 *
 * Return: The location of the concated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, len_1, sum_len, i;

	i = 0;
	len = _strlen(dest);
	len_1 = _strlen(src);
	sum_len = len + len_1;
	if (n < len_1)
	{
		sum_len = len  + n;
	}
	for (; len < sum_len; len++)
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
