#include <stdio.h>

/**
 * main - prints possible combination of 3 digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int fir, sec, thi;

	fir = sec = 48;

	while (fir < 56)
	{
		sec = fir + 1;

		while (sec < 57)
		{
			thi = sec + 1;
			while (thi <= 57)
			{
				putchar(fir);
				putchar(sec);
				putchar(thi);

				if (fir != 55 || sec != 56 || thi != 57)
				{
					putchar(',');
					putchar(' ');
				}

				thi++;
			}

			sec++;
		}

		fir++;
	}
	putchar('\n');
	return (0);
}

