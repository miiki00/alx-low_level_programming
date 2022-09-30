#include  <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies the first two args of main.
 * @argc: The number of args.
 * @argv: The arguments.
 *
 * Return: The output of the multiplication  else  1.
 */
int main(int argc, char *argv[])
{
	if  (argc != 3 || !(atoi(argv[1]) && atoi(argv[2])))
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
