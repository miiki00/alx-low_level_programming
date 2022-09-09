#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Generates random number.
  *
  * Description: Generates a random number and tells if
  * if the last digit is less than 5 or equal to 0
  * or it is between 0 and 6.
  * Return: Always 0.
  */
int main(void)
{
	int n;
	int modulo_;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	modulo_ = n % 10;

	if (modulo_ == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, modulo_);
	}
	else if (modulo_ < 6 && modulo_ != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
				, n, modulo_);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n",
				n, modulo_);
	}

	return (0);
}
