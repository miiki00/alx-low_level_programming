#include "main.h"

/**
 * is_prime_number - checks is n is prime number or not.
 * @n: The number to be checked.
 *
 * Return: 1 (n is prime), 0 (n is not prime)
 */
int is_prime_number(int n)
{
	int i;

	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0 || n <= 1)
		return (0);
	i = 5;
	do {
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
		i = i + 6;
	} while (i * i < n);
	return (1);
}
