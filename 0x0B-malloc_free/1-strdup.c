#include "main.h"

/**
 * _strdup - copies and stores a string in a new memory address.
 * @str: The address of the string to be copied.
 *
 * Return: The address of the string if succeed
 * on error NULL.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0';)
		i++;
	ptr = malloc(sizeof(*ptr) * i);
	if (ptr != NULL)
		for (j = 0; j <= i; j++)
			*(ptr + j) = *(str + j);
	return (ptr);

}
