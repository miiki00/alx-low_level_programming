#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers.
 *
 * Return: Always 0.(success)
 */
int main(void)
{
	unsigned long int j, k, l;
	int i;

	k = 2;
	j = i = 3;
	while (i <= 98)
	{
		if (i == 3)
		{
			printf("%d, %d, %d, ", (j - 2), (j - 1), j);
		}
		else
		{
			l = j + k;
			if (i == 98)
				printf("%lu\n", l);
			else
				printf("%lu, ", l);
			k = j;
			j = l;
		}
		i++;
	}

	return (0);

}
