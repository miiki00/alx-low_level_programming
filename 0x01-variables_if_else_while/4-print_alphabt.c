#include <stdio.h>

/**
  * main - prints the whol alphabet except 'e' and 'q'
  *
  * Return: Always 0.
  */
int main(void)
{
	char alpha_;

	for (alpha_ = 'a'; alpha_ <= 'z'; alpha_++)
	{
		if (alpha_ != 'e' && alpha_ != 'q')
			putchar(alpha_);
	}

	putchar('\n');

	return (0);
}
