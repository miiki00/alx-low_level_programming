#include "lists.h"

/**
 * list_len - counts length of a list.
 * @h: The head of the list.
 *
 * Return: The length of the list.
 */
size_t list_len(const list_t *h)
{
	size_t len;
	const list_t *ptr;

	if (h == NULL)
		return (0);
	for (len = 0, ptr = h;; len++, ptr = ptr->next)
	{
		if (ptr == NULL)
			return (len);
	}
}
