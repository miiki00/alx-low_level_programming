#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given and index and
 * fills it with the data value provided.
 * @head: The address of the head pointer.
 * @idx: The index to insert the node to.
 * @n: The value of the nodes data(n).
 *
 * Return: The address of the newly added node or on error NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *tmp2, *tmp3;
	int i, j;

	j = idx - 1;
	if (head == NULL)
		return (NULL);
	tmp3 = malloc(sizeof(listint_t));
	if (tmp3 == NULL)
		return (NULL);
	tmp3->n = n;
	for (tmp = *head, i = 0; tmp != NULL; tmp = tmp->next, i++)
	{
		if (idx == 0)
		{
			*head = tmp3;
			tmp3->next = tmp;
			return (tmp3);
		}
		if (i == j)
		{
			tmp2 = tmp->next;
			tmp->next = tmp3;
			tmp3->next = tmp2;
			return (tmp3);
		}
	}
	free(tmp3);
	return (NULL);
}
