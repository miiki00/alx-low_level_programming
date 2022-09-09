#include <stdio.h>

/**
  * main - Prints the English alphabet in lowwercase.
  *
  * Return: Always 0.
  */
int main(void)
{
	char alpha_;

	for (alpha_ = 'a'; alpha_ <= 'z'; alpha_++)
	{
		putchar(alpha_);
		if (alpha_ == 'z')
			putchar('\n');
	}

	return (0);
}
