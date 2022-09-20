#include "main.h"

/**
 * _strcpy - copies the string @src to @dest
 * @src: The address of the string to be copied.
 * @dest: The adress of the place to copy it to.
 *
 * Return: The address of the place it's copied to.
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);
	for (i = 0; i <= len; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}

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
