#include <stdio.h>
/**
 * main - prints the name of the file followed by a new line.
 * @argc: The number of arguments.
 * @argv: The arguments.
 *
 * Return: Always 0.
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
