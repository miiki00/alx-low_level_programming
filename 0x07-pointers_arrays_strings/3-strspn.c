#include "main.h"

/**
 * _strspn - checks for the existence of the chars located @accept
 * in the initial segment of string located @s.
 * @s: The address of the string to be check.
 * @accept: The strings to check for in @s.
 *
 * Return: The number of the occurence of the char(s) in the
 * string located @accept in the initial segment of the
 * string located @s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, ret;

	ret = 0;
	for (i = 0; *(accept + i) != '\0'; i++)
	{
		for (j = 0; *(s + j) != ' '; j++)
		{
			if (*(s + j) == *(accept + i))
			{
				ret += 1;
			}
		}
	}

	return (ret);
}
