#include "dog.h"

/**
 * print_dog - prints the values of the given struct type of
 * struct dog.
 * @d: The address of the struct to be printd.
 *
 * Return: Void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (d->age != 0)
		printf("Age: %.6f\n", d->age);
	else
		printf("Age: (nil)\n");
	if (d->owner != NULL)
		printf("Owner: %s", d->owner);
	else
		printf("Owner: (nil)\n");
}
