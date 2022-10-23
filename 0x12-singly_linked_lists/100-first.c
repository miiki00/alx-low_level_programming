#include <stdio.h>

/**
 * print_first - prints a message before the main function is executed.
 *
 * Return: Void.
 */
void print_first(void)__attribute__((constructor));

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
