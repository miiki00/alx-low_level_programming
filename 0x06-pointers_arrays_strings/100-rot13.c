#include "main.h"

/**
 * rot13 - encodes a string located @str with rot13.
 * @str: The location of the string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int i, j;
	char ch;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		ch = *(str + i);
		j = 0;
		while (((ch <= 122 && ch >= 97) || (ch <= 97 && ch >= 65)) && j < 1)
		{
			if ((ch >= 65 && ch <= 77) || (ch >= 97 && ch <= 109))
			{
				*(str + i) = *(str + i) + 13;
			}
			else
			{
				*(str + i) = *(str + i) - 13;
			}
			j++;
		}
	}

	return (str);
}
