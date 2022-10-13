#include "variadic_functions.h"

/**
 * print_numbers - prints numbers separated by a given parameter.
 * @separator: The separator used when printing numbers.
 * @n: Number of elements.
 *
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int i;

	if (n == 0)
		return;
	va_start(numb, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numb, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(numb);
	putchar('\n');
}
