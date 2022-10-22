#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list.
 * @head: The head of the list.
 * @str: The string to be stored in the element of the node.
 *
 * Return: The address of the new node
 * on error NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *tmp;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	for (tmp = *head;; tmp = tmp->next)
	{
		if (tmp->next == NULL)
		{
			tmp->next = ptr;
			break;
		}
	}
	return (ptr);
}
