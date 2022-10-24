#include "lists.h"

/**
 * get_nodeint_at_index - get the adress of the element at index
 * number @index.
 * @head: The head pointer of the list.
 * @index: The index of the element needed.
 *
 * Return: The adress of the element if found on error NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int cnt;

	if (head == NULL)
		return (NULL);
	for (cnt = 0, tmp = head; tmp != NULL; tmp = tmp->next, cnt++)
	{
		if (cnt == index)
			return (tmp);
	}
	return (NULL);
}
