#include "variadic_functions.h"

/**
 * sum_them_all - adds all the arguments passed except the
 * counter of arguments n.
 * @n: Number of arguments.
 *
 * Return: The sum of the numbers passed.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numb;
	unsigned int i;
	int sum;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(numb, n);
	for (i = 0; i < n; i++)
		sum += va_arg(numb, int);
	va_end(numb);
	return (sum);

}
