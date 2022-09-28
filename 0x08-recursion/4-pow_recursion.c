#include "main.h"

/**
 * _pow_recursion - calculate the outcome of @x raised to @y.
 * @x: The number to be powerd.
 * @y: The number to power.
 *
 * Return: The outcome of the calculation or if y < 0 -1.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
