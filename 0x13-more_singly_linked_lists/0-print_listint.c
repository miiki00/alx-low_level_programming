#include "lists.h"

/**
 * print_listint - prints all the elements of the list listint_t.
 * @h: The head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt;
	const listint_t *tmp = NULL;

	if (h == NULL)
		return (0);
	for (cnt = 0, tmp = h; tmp != NULL; tmp = tmp->next, cnt++)
		printf("%d\n", tmp->n);
	return (cnt);
}

