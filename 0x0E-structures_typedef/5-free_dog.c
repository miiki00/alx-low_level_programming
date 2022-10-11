#include "dog.h"

/**
 * free_dog - frees a memory thats is ocuppied by the struct dog.
 * @d: address of the struct dog.
 *
 * Return: Void.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
