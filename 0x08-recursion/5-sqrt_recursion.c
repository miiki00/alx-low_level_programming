#include "main.h"

/**
 * sqrt_chk - recives more info from the _sqrt_recursion func to
 * calculatet the disired outcome.
 * @n: The number to get square root for.
 * @y: The number of the process reptition.
 *
 * Return: The out square root if number is perfect square.
 * else -1.
 */
int sqrt_chk(int n, int y)
{
	int i;

	i = 1 + (y * 2);
	if (n < 0)
		return (-1);
	if (i > n)
		return (-1);
	if (n - i == 0)
		return (y + 1);
	return (sqrt_chk(n - i, y + 1));
}

/**
 * _sqrt_recursion - calculates the square root of a perfect square.
 * @n: The number to get the square root for.
 *
 * Return: The square root if perfect square else -1.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_chk(n, 0));
}
