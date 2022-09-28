#include "main.h"

/**
 * factorial - calculates the factorial of a number.
 * @n: The number to be factorized.
 *
 * Return: The factorial if it is a valid number
 * else -1.
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
