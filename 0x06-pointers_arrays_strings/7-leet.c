#include "main.h"

/**
 * leet - encodes a string located @str with leet.
 * @str: The location of the string to be encoded.
 *
 * Return: The location of the encoded string.
 */
char *leet(char *str)
{
	int i, j, k;
	char ch;
	char chk[] = "AaEeOoTtLl";
	int val[] = {52, 51, 48, 55, 49};

	for (i = 0; *(str + i) != '\0'; i++)
	{
		ch = *(str + i);
		for (j = 0, k = 0; j < 10 ; j += 2, k++)
		{
			if (ch == chk[j] || ch == chk[j + 1])
			{
				*(str + i) = val[k];
			}
		}
	}

	return (str);
}
