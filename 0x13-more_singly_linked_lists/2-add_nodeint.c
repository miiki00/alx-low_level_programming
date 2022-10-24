#include "lists.h"

/**
 * add_nodeint - adds a node at the beggining of the list
 * listint_t.
 * @head: head of the list.
 * @n: The value of the new node element.
 *
 * Return: The address of the newly added element.
 * on error NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = NULL;

	if (head == NULL)
		return (NULL);
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (*head);
}
