#include "lists.h"

/**
 * free_listint - frees a memory occupied by a list kind of
 * listint_t.
 * @head: The head of the list.
 *
 * Return: Void.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = NULL, *tmp2 = NULL;

	if (head == NULL)
		return;
	for (tmp = head, tmp2 = head->next; tmp2 != NULL; tmp = tmp2)
	{
		tmp2 = tmp->next;
		free(tmp);
	}
}
