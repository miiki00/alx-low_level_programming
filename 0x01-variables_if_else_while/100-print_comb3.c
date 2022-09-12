#include <stdio.h>

/**
 * main - prints all possible combination of two digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int fir, sec;

	fir = 48;

	while (fir < 57)
	{
		sec = fir + 1;

		while (sec <= 57)
		{
			putchar(fir);
			putchar(sec);

			if (fir != 56 || sec != 57)
			{
				putchar(',');
				putchar(' ');
			}

			sec++;
		}

		fir++;
	}

	putchar('\n');

	return (0);
}
