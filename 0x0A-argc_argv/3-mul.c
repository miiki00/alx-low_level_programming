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
	int ret, i, j;

	if  (argc != 3)
	{
		ret = 1;
		printf("Error");
	}
	else
	{
		ret = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", ret);
	}
	return (0);
}
