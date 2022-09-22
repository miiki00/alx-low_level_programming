#include "main.h"

/**
 * _strcmp - compares string locatet @s1 and @s2.
 * @s1: The first string address.
 * @s2: The second string address.
 *
 * Return: 0 if they are same.
 * >0 if the first character's ascii value of @s1 if greater
 * than @s2. <0 if the ascii value of the first char of @s2 is
 * greater than @s2.
 */
int _strcmp(char *s1, char *s2)
{
	int ret;

	while (*s1 == *s2  && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
		if (*(s1 + 1) == '\0' || *(s1 + 1) == '\0')
		{
			ret = 0;
		}
	}
	if (*s1 != '\0' && *s2 != '\0')
	{
		ret = *s1 - *s2;
	}

	return (ret);
}
