#include "lists.h"

/**
 * pop_listint - Removes the head node of a listiint_t linked list.
 * @head: a pointer to the head pointer.
 *
 * Return: The n value of the elemetnt of the linked list element.
 * if head is NULL 0.
 */
int pop_listint(listint_t **head)
{
	unsigned int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (n);
}
