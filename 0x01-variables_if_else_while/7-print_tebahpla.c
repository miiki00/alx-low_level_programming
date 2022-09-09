#include <stdio.h>

/**
  * main - Prints the English alphabet in reverse.
  *
  * Return: Always 0.
  */
int main(void)
{
	char alpha_;

	for (alpha_ = 'z'; alpha_ >= 'a'; alpha_--)
	{
		putchar(alpha_);
		if (alpha_ == 'a')
			putchar('\n');
	}

	return (0);
}
