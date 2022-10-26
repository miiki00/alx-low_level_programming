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

/**
 * listint_len - counts length of a list kind of listint_t.
 * @h: The head of the list.
 *
 * Return: The length of the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t len;
	const listint_t *ptr;

	if (h == NULL)
		return (0);
	for (len = 0, ptr = h;; len++, ptr = ptr->next)
	{
		if (ptr == NULL)
			return (len);
	}
}

/**
 * swap_nodeint - swap nodes in a listint_t singly linked list.
 * @head: The address of the head pointer.
 * @n_1: The index of first node to be swaped.
 * @n_2: The index of second node to be swaped.
 *
 * Return: The address of the first node of the list.
 * on error NULL.
 */
listint_t *swap_nodeint(listint_t **head, size_t n_1, size_t n_2)
{
	listint_t *tmp, *tmp2, *tmp3, *tmp4;
	size_t n;

	tmp = tmp2 = tmp3 = tmp4 = NULL;
	if (head == NULL || *head == NULL || n_1 == n_2)
		return (*head);
	if (n_2 - n_1 == 1 || n_1 - n_2 == 1)
		return (NULL);
	if (n_1 == 0 || n_2 == 0)
	{
		if (n_1 > 0)
			n = n_1;
		else
			n = n_2;
		tmp = *head;
		tmp2 = GET_NODE(*head, n - 1);
		*head = GET_NODE(*head, n);
		tmp2->next = tmp;
		tmp2 = tmp->next;
		tmp->next = (*head)->next;
		(*head)->next = tmp2;
	}
	else
	{
		tmp = GET_NODE(*head, n_1 - 1);
		tmp2 = GET_NODE(*head, n_2 - 1);
		tmp3 = GET_NODE(*head, n_2);
		tmp4 = GET_NODE(*head, n_1);
		tmp->next = tmp3;
		tmp2->next = tmp4;
		tmp2 = tmp3->next;
		tmp3->next = tmp4->next;
		tmp4->next = tmp2;
	}
	return (*head);
}
/**
 * reverse_listint - reverst a list kind of listint_t.
 * @head: The address of the head pointer of the list.
 *
 * Return: The first node of the list.
 */
listint_t *reverse_listint(listint_t **head)
{
	unsigned int j, k;

	if (head == NULL || *head == NULL)
		return (*head);
	k = listint_len(*head);
	for (j = 0; j < k / 2; j++)
	{
		swap_nodeint(head, j, k - 1 - j);
	}
	return (*head);
}
