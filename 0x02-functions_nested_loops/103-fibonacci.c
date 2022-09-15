#include <stdio.h>

/**
 * main - prints the sum of even febonacci numbers
 *
 * Return: Always 0.(success)
 */
int main(void)
{
	long int i, j, k, l, r;

	j = 3;
	k = 2;
	r = 2;
	i = 3;
	while (i <= 50)
	{
		l = j + k;
		if ((l < 4000000) && ((l % 2) == 0))
		{
			r = r + l;
		}
		else if (((l % 2) != 0) && (l < 4000000))
		{
			k = j;
			j = l;
		}
		else
		{
			break;
		}
		i++;
	}
	printf("%ld\n", r);
	return (0);
}
