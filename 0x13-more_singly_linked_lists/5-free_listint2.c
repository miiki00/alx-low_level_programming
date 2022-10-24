#include "lists.h"

/**
 * free_listint2 - Frees a memomry that is occupied with a list
 * kind of listint_t and set the head to NULL.
 * @head: A pointer to the address of the head pointer.
 *
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL, *tmp2 = NULL;

	if (head == NULL || *head == NULL)
		return;
	tmp = *head;
	tmp2 = tmp->next;
	do {
		tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	} while (tmp2 != NULL);
	*head = NULL;
}
