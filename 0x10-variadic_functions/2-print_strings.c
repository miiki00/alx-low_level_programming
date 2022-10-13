#include "variadic_functions.h"

/**
 * print_strings - prints strings separated by a given parameter.
 * @separator: The separator wanted to print.
 * @n: Number of string passed.
 *
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	if (n == 0)
		return;
	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
