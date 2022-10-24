#include "lists.h"

/**
 * sum_listint - calculates the sum of all data(n) of a
 * listint_t linked list.
 * @head: The head pointer of the list.
 *
 * Return: The sum of the all data(n) elements of the the nodes
 * if list empty 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);
	for (tmp = head; tmp != NULL; tmp = tmp->next)
		sum = sum + tmp->n;
	return (sum);
}
