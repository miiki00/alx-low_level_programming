#include "main.h"

/**
 * rev_string - reverse a given string and store it back to the owner var
 * @s: The address of the string to be reversed.
 *
 * Return: Void.
 */
void rev_string(char *s)
{
	int i, j, k;
	char str[_strlen(s)];

	k = _strlen(s);
	for (i = 0; i <= k; i++)
	{
		*(str + i) = *(s + i);
	}

	j = k - 1;
	for (i = 0; i <  k; i++)
	{
		*(s + i) = *(str + j);
		j--;
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
