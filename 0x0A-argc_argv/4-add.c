#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds to positive  numbers.
 * @argc: The number of arguments.
 * @argv: The arguments.
 * Return:  If successful return 0. else on error 1.
 */
int main(int argc, char *argv[])
{
	int i, j, k;
	char *c, l;

	k = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(argv[i] + j) != '\0'; j++)
		{
			l = *(argv[i] + j);
			c = &l;
			if (atoi(c) == 0 && *c != '0')
			{
				printf("Error\n");
				return (1);
			}
		}
		k = k + atoi(argv[i]);
	}
	printf("%d\n", k);
	return (0);
}
