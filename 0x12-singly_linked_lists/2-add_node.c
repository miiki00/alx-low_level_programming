#include "lists.h"

/**
 * _strlen - countes the length of a string
 * @s: Pointer to the first value of the string.
 *
 * Return: Void.
 */
int _strlen(const char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * add_node - adds a node at the beginning of a list.
 * @head: the head of the list.
 * @str: The string to be storde in the elt of the node.
 *
 * Return: The address of the new element
 * on error NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->next = *head;
	ptr->str = strdup(str);
	ptr->len = _strlen(str);
	*head = ptr;

	return (*head);
}
