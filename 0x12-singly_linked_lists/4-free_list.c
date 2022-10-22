#include "lists.h"

/**
 * free_list - frees a memory that is allocated for a list.
 * @head: The head of the list.
 *
 * Return: Void.
 */
void free_list(list_t *head)
{
	list_t *ptr, *tmp;

	for (tmp = head; ptr != NULL; tmp = ptr)
	{
		ptr = tmp->next;
		free(tmp->str);
		free(tmp);
	}
}
