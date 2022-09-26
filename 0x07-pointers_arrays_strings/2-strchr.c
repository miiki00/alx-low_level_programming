#include "main.h"

/**
 * _strchr - locates and prints the address of the first occurence
 * of the char @c in the string located in @s.
 * @s: The location of the string.
 * @c: The character to be located.
 *
 * Return: The address of the located char.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ret;

	ret = NULL;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			ret = s + i;
			break;
		}
	}
	if (c == '\0')
	{
		return ('\0');
	}

	return (ret);
}
