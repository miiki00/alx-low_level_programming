#include <stdio.h>

/**
 * main - prints the sum of divisibles of 5 or 3
 *
 * Return: Always 0. (success)
 */
int main(void)
{
	int i, j;

	i = 1;
	j = 0;
	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			j = j + i;
		i++;
	}
	printf("%d\n", j);
	return (0);
}
