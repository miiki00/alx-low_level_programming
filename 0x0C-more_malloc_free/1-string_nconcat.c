#include "main.h"

/**
 * string_nconcat - concat string @s1 with the first @n bytes of
 * string @s2.
 * @s1: The address of the first string.
 * @s2: The address of the second string.
 * @n: The number of bytes to take form string @s2.
 *
 * Return: The address of the concated string.
 * on error NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	if (n >= strlen(s2))
		n = strlen(s2);
	p = malloc(sizeof(*p) * (strlen(s1) + n) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		p[i] = s2[j];
	p[i] = '\0';

	return (p);
}
