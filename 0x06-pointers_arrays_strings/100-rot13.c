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
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(str + i) == alpha[j])
			{
				*(str + i) = rot[j];
				break;
			}
		}
	}
	return (str);
}
