#include <stdio.h>

/**
 * check_prime - checks if a number is prime or not.
 * @n: The number to check.
 *
 * Return: 1 (prime), 0 (not prime).
 */
int check_prime(unsigned long int n)
{
	unsigned long int i;

	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	for (i = 5; i * i <= n; i = i + 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
	}
	return (1);
}

/**
 * largest_prime_factor - claculates the largest prime factor of a number.
 * @n: The number to calculate the largest prime number for.
 *
 * Return: The largest prime factor of the number n.
 */
unsigned long int largest_prime_factor(unsigned long int n)
{
	unsigned long int lpf = 0, i;

	/* needs a condition to check numbers lower that 5 */
	for (i = 5; (i * i) / 5000 <= n; i = i + 6)
	{
		if (n % i == 0)
			lpf = i;
		if (n % (i + 2) == 0)
			lpf = i;
	}
	if (lpf == 0)
		return (n);
	return (lpf);
}

/**
 * main - a program that prints the larges prime factor of the
 * number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int lpf;

	lpf = largest_prime_factor(612852475143);
	printf("%lu\n", lpf);
	return (0);
}
