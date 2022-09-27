#include "main.h"

/**
 * _strstr - checks if @needle is substring of @haystack
 * @haystack: The adress of the parent string.
 * @needle: The address of the substring.
 *
 * Return: If the sub string exist the address of the first char
 * else NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	char *ret;

	ret = NULL;
	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		k = 0;
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i + k) == *(needle + j))
			{
				k++;
			}
			else
			{
				break;
			}
		}
		if (*(needle + j) == '\0')
		{
			ret = (haystack + i);
			break;
		}
	}
	return (ret);
}
