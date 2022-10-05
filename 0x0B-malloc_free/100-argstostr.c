#include "main.h"

/**
 * all_len - calculate the sum of the lengh of all the strings
 * in @strs.
 * @n: Number of strings in @strs
 * @strs: The array of the strings.
 *
 * Return: The sum of the length of the strings.
 * on error 0.
 */
int all_len(int n, char **strs)
{
	int i, j, k;

	k = 0;
	if (n == 0 || strs == NULL)
		return (0);
	for (i = 0; i < n; i++)
	{
		for (j = 0; strs[i][j] != '\0';)
		{
			j++;
		}
		k = k + j;
	}
	return (k + n);
}
/**
 * argstostr - concatenets all strings in @av.
 * @ac: Number of elements in av.
 * @av: Pointer to the array of the strings.
 *
 * Return: if successful a pointer to the newly concated string
 * on error NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *p;

	k = 0;
	if (ac <= 0 || av == NULL)
		return (NULL);
	p = malloc(sizeof(char) * all_len(ac, av) + 1);
	if (p ==  NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			p[k] = av[i][j];
			if (av[i][j + 1] == '\0')
			{
				k++;
				p[k] = '\n';
			}
		}
	}
	p[k] = '\0';
	return (p);
}
