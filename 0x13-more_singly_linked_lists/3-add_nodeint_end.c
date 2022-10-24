#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * kind of listint_t.
 * @head: The head of the list.
 * @n: The value to be assigned to the element of the element
 * of the list.
 *
 * Return: The address of the newly added element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp2, *tmp = NULL;

	if (head == NULL)
		return (NULL);
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
		*head = tmp;
	for (tmp2 = *head; *head != tmp; tmp2 = tmp2->next)
	{
		if (tmp2->next == NULL)
		{
			tmp2->next = tmp;
			break;
		}
	}
	return (tmp);
}
