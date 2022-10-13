#include "function_pointers.h"

/**
 * array_iterator - iterates through a given array passing
 * each element to function @action.
 * @array: The adress of the array.
 * @size: size of array.
 * @action: The function to pass the elt of the arrays to.
 *
 * return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size < 1 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
