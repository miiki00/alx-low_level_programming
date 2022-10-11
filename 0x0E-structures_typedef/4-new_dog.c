#include "dog.h"

/**
 * _strlen - countes the length of a string
 * @s: Pointer to the first value of the string.
 *
 * Return: Void.
 */
int _strlen(char *s)
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
 * new_dog - creates a new dog with the informations provided.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: A pointer to the new dog struct
 * on error NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * _strlen(name));
	d->owner = malloc(sizeof(char) * _strlen(owner));
	if (d->name == NULL || d->owner == NULL)
		return (NULL);
	for (i = 0; i < _strlen(name); i++)
		*(d->name + i) = *(name + i);
	for (i = 0; i < _strlen(owner); i++)
		*(d->owner + i) = *(name + i);
	d->age = age;

	return (d);
}

