#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * Description: Prints numbers 1 to 100 with some exceptions i.e
 * for multiples of 3 it will print "Fizz" instead of the number
 * for multiples of 5 it will print "Buzz" instead of the number
 * for multiples of both 5 & 3 it will print "FizzBuzz".
 *
 * Return: Always 0.(success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz, ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz, ");
		}
		else if ((i % 5) == 0)
		{
			if (i != 100)
				printf("Buzz, ");
			if (i == 100)
				printf("Buzz\n");
		}
		else
		{
			printf("%d, ", i);
		}
	}

	return (0);
}
