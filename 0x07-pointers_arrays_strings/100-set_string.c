#include "main.h"

/**
 * set_string - copies the value of pointer @to to @s.
 * @s: The address of the pointer to be chaged to the value @to.
 * @to: The address of the value to filled to pointer @s.
 *
 * Return: Void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
