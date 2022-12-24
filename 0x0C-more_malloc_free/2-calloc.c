#include "main.h"

/**
 * _calloc - allocates a memory for an array of element of @nmemb and each
 * having size @size.
 * @nmemb: The number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to the newly allocated memory
 * on error NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	long int *ui;
	int *n;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (p);
	if (size == sizeof(*ui))
	{
		ui = (long int *)p;
		for (i = 0; i < nmemb; i++)
			*(ui + i) = 0;
	}
	else if (size == sizeof(*n))
	{
		n = (int *)p;
		for (i = 0; i < nmemb; i++)
			*(n + i) = 0;
	}
	return (p);
}
