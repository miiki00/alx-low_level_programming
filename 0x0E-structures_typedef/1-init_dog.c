#include "dog.h"

/**
 * init_dog - initilizes a struct called dog with the values
 * provided.
 * @d: The address of the struct declared.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the owner.
 *
 * Return: Vodi.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
