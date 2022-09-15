#include <stdio.h>

/**
 * main - prints the first 50 Febonacci numbers
 *
 * Return: Always 0.(success)
 */
int main(void)
{
	long int i, j, k, l;

	i = 3;
	j = 3;
	k = 2;
	while (i <= 50)
	{
		if (i == 3)
		{
			printf("%ld, %ld, %ld, ", (j - 2), (j - 1), j);
		}
		else
		{
			l = j + k;
			if (j < 0)
				j = j * -1;
			if (k < j)
				k = k * -1;
			if (i == 50)
				printf("%ld\n", l);
			else
				printf("%ld, ", l);
			k = j;
			j = l;
		}
		i++;
	}
	return (0);
}
