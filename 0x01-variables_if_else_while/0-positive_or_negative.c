#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Every time when its excuted it generates a random num.
  *
  * Description: Every time when you excute this program it generates
  * a random number and tell if it's positive(+), zero(0) or
  * negative(-).
  * Return: Always 0.
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
