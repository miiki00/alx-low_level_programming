#include "main.h"

/**
 * malloc_checked - allocates memory and cheks if the memory is allocate
 * successful.
 * @b: The amount of memoroy to be allocated.
 *
 * Return: if malloc successfully allocated the memory return the address.
 * on error the program will process termination status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}
