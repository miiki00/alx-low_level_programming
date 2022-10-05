#include "main.h"
/**
 * give_index - gives you the first index of the letter for
 * word on index number @index.
 * @index: The index of the word.
 * @str: The address of the string.
 *
 * Return: The first index of the word
 */
int give_index(unsigned int index, char *str)
{
	unsigned int i, j, k;

	j = k = 0;
	if (str == NULL || index > (unsigned int)count_word(str))
		return (0);
	if (str[0] == ' ')
	{
		while (str[j] == ' ')
			j++;
	}
	for (i = j; str[i] != '\0'; i++)
	{
		if (k == index)
			break;
		if (str[i] == ' ' && str[i + 1] != ' ')
			k++;
	}
	return (i);
}
/**
 * count_word_index - coutn the length of the word on
 * a given index @index.
 * @index: The index of the word on the string.
 * @str: The address of the string.
 *
 * Return: The length of the word.
 * on error 0.
 */
int count_word_index(unsigned int index, char *str)
{
	unsigned int i, j, k, l;

	j = k = 0;
	if (str == NULL || index > (unsigned int)count_word(str))
		return (0);
	if (str[0] == ' ')
	{
		while (str[j] == ' ')
			j++;
	}
	for (i = j; str[i] != '\0'; i++)
	{
		if (k == index)
		{
			for (l = 0; str[i + l] != ' ' && str[i + l] != '\0';)
				l++;
			break;
		}
		if (str[i] == ' ' && str[i + 1] != ' ')
			k++;
	}
	return (l);
}
/**
 * count_word - counts word in a string.
 * @str: The address of the string to count words for.
 *
 * Return: The number of words in the string.
 * on error 0.
 */
int count_word(char *str)
{
	int i, j;

	if (str == NULL)
		return (0);
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			j++;
		if (str[i + 1] == '\0')
			j++;
	}
	if (str[0] == ' ')
		j = j - 1;
	return (j);
}
/**
 * strtow - splits string to word.
 * @str: The string to be splited.
 *
 * Return: The adrees of the array that contain the new
 * splited words. On erro NULL.
 */
char **strtow(char *str)
{
	int i, j, k, l, ind;
	char **p;

	if (count_word(str) == 0 || *str == '\0' || str == NULL)
		return (NULL);
	k = count_word(str);
	p = malloc(sizeof(char *) * k);
	if (p == NULL)
		return (NULL);
	for (i = 0, l = 2; i < k; i++)
	{
		if (i + 1 == k)
			l = 3;
		p[i] = malloc(sizeof(char) * count_word_index(i, str) + l);
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
	}
	for (i = 0; str[i] != '\0'; i++)
		if (str[i + 1] == '\0' && str[i] == ' ')
			k--;
	for (i = 0; i < k; i++)
	{
		l = count_word_index(i, str);
		ind = give_index(i, str);
		for (j = 0; j < l; j++, ind++)
			p[i][j] = str[ind];
		p[i][j] = '\0';
	}
	p[i] = NULL;
	return (p);
}

