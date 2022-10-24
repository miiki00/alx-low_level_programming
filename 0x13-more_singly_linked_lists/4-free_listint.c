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
	listint_t *tmp, *tmp2;

	tmp = tmp2 = NULL;
	if (head == NULL)
		return;
	tmp = head;
	tmp2 = head->next;
	do {
		tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	} while (tmp2 != NULL);
}
