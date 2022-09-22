#include "main.h"

/**
 * cap_string - caps all small case laters that ar preceede by
 * this separators of words: space ' ', tabulation '\t', new line '\n', ',',
 * ';', '*', '.', '!', '?', '"', '(', ')', '{', and '}'.
 * @str: The address of the string to be  manipulated.
 *
 * Return: The address of the string.
 */
char *cap_string(char *str)
{
	int i, j, ch;
	int sep[13] = {32, 9, 10, 44, 46, 59, 33, 63, 34, 41, 40, 123, 125};

	for (i = 0; *(str + i) != '\0'; i++)
	{
		ch = *(str + i + 1);
		for (j = 0; j < 13; j++)
		{
			if (*(str + i) == sep[j] && ch <= 122 && ch >= 97)
			{
				*(str + i + 1) = ch - 32;
			}
		}
	}

	return (str);
}
