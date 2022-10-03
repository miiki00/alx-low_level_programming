#include "main.h"

/**
 * _len - calculate length of two strings.
 * @s1: The address of the first string.
 * @s2: The address of the second string.
 * @n: Condition cheker.
 *
 * Return: The length of the string if success.
 * on error 0.
 */
int _len(char *s1, char *s2, int n)
{
	int i, len;

	i = len = 0;
	if (n != 3)
	{
		while (n != 1 && *(s1 + len) != '\0')
			len++;
		while (n != 2 && *(s2 + i) != '\0')
			i++;
		len = len + i + 1;
	}
	if (n == 3)
		len = 1;
	return (len);
}

/**
 * str_concat - concats two strings.
 * @s1: The address of the first string.
 * @s2: The address of the second string.
 *
 * Return: The new address for the concated string
 * on error NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int len, i, j, n;
	char *p;

	p = NULL;
	len = i = j = n = 0;
	if (s1 == NULL)
		n = 1;
	if (s2 == NULL)
		n = n + 2;
	len = _len(s1, s2, n);
	p = malloc(sizeof(*p) * len);
	if (p != NULL)
	{
		if (n != 3)
		{
			while (n != 1 && *(s1 + i) != '\0')
			{
				*(p + i) = *(s1 + i);
				i++;
			}
			while (n != 2 && *(s2 + j) != '\0')
			{
				*(p + i) = *(s2 + j);
				i++;
				j++;
			}
		}
		if (n == 3)
			*p = '\0';
	}
	return (p);

}
