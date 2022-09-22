#include "main.h"

/**
 * string_toupper - changes all lower case char in a string to upper.
 * @str: The string to be manipulated.
 *
 * Return: The pointer to the manipulated string.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) <= 122 && *(str + i) >= 97)
		{
			*(str + i) = *(str + i) - 32;
		}
	}

	return (str);
}
