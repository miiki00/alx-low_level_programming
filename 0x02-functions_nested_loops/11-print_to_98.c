#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from n to 98
 * @n: Number to start printing from.
 *
 * Return: void.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			if (n == 98)
				printf("\n"
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			if (n == 98)
				printf("\n");
		}
	}

}
