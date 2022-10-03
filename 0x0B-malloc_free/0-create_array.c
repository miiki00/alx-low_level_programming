#include "main.h"

/**
 * create_array - allocates @size number of bytes on the heap
 * and intialize the first char as @c.
 * @size: Size of memory to allocate.
 * @c: The character to initialize it with.
 *
 * Return: If succecced the address of the memory else
 * if size is zero '0' or fail to allocate NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	str = malloc(sizeof(*str) * size);
	if (str != NULL)
		for (i = 0; i < size; i++)
			*(str + i) = c;

	return (str);
}
