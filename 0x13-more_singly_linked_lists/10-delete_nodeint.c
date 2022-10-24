#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index.
 * @head: The address of the head pointer of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;
	unsigned int i, j;

	tmp = tmp2 = NULL;
	j = index - 1;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0, tmp = *head; tmp != NULL; tmp = tmp->next, i++)
	{
		if (index == 0)
		{
			if (tmp->next != NULL)
				*head = tmp->next;
			else
				*head = NULL;
			free(tmp);
			return (1);
		}
		if (i == j)
		{
			tmp2 = tmp->next;
			if (tmp2 != NULL)
			{
				tmp->next = tmp2->next;
				free(tmp2);
			}
			else
			{
				tmp->next = NULL;
			}
			return (1);
		}
	}
	return (-1);
}
