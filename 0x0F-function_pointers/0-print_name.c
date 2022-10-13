#include "function_pointers.h"

/**
 * print_name - function that calls back the passed function
 * with argument @name.
 * @name: The name to be passed to the function passed.
 * @f: The function to be called.
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

