#include "lists.h"

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
