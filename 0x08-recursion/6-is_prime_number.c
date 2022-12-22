#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks is n is prime number or not.
 * @n: The number to be checked.
 *
 * Return: 1 (n is prime), 0 (n is not prime)
 */
int is_prime_number(int n)
{
	int ret;

	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n <= 1)
		return (0);
	ret = check_the_rest(n, 5);
	return (ret);
}

/**
 * check_the_rest - checks if n is prime or not using recursion.
 * @n: The number to check.
 * @start: The number to start checking if n divisiblity from.
 *
 * Return: 1 (n is prime), 0 (n is not prime)
 */
int check_the_rest(int n, int start)
{
	int ret;

	if (start * start >= n)
		return (1);
	if (n % start == 0 || n % (start + 2) == 0)
		return (0);
	ret = check_the_rest(n, start + 6);
	return (ret);
}
