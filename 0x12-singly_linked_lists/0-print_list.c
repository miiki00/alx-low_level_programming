#include "lists.h"

/**
 * print_list - prints elements of a list.
 * @h: The head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *ptr = NULL;

	if (h == NULL)
		return (0);
	for (ptr = h, count = 0; ptr != NULL; ptr = ptr->next, count++)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
	}

	return (count);
}
