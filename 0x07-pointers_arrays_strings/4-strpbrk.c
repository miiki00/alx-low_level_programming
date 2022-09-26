#include "main.h"

/**
 * _strpbrk - checks for the closest occuring to the begining of the
 * string located @s of the char(s) in the string located @accept.
 * @s: The string to be check on.
 * @accept: The char of the char to check from.
 * Return: The address of the first occuring char else null.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, k;
	char *ret;

	k = 100 * 100 * 100;
	ret = NULL;
	for (i = 0; *(accept + i) != '\0'; i++)
	{
		for (j = 0; *(s + j) != '\0'; j++)
		{
			if (*(s + j) == *(accept + i) && k > j)
			{
				k = j;
			}
		}
		if (k != 100 * 100 * 100)
		{
			ret = s + k;
		}
	}
	return (ret);
}
