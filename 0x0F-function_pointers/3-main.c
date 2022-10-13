#include "3-calc.h"

/**
 * main - a basic calculatin performer.
 * @argc: Number of arguments passed.
 * @argv: Actual arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int (*operate)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	operate = get_op_func(argv[2]);
	if (operate == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operate(a, b));

	return (0);
}
