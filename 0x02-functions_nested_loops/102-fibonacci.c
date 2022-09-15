#include <stdio.h>

/**
 * main - prints the first 50 Febonacci numbers
 *
 * Return: Always 0.(success)
 */
int main(void)
{
	int i, j, k, l;

	i = 3;
	j = 3;
	k = 2;
	while (i <= 50)
	{
		if (i == 3)
		{
			printf("%d, %d, %d, ", (j - 2), (j - 1), j);
		}
		else
		{
			l = j + k;
			if (i == 50)
				printf("%d", l);
			else
				printf("%d, ", l);
			k = j;
			j = l;
		}
		i++;
	}
	return (0);
}
