#include "main.h"

/**
 * rev_string - reverse a given string and store it back to the owner var
 * @s: The address of the string to be reversed.
 *
 * Return: Void.
 */
void rev_string(char *s)
{
	int i;
	char *first, *last, holder;

	first = s;
	last = &(*(s + (_strlen(s) - 1)));

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		holder = *last;
		*last = *first;
		*first = holder;

		first += 1;
		last -= 1;
	}
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
