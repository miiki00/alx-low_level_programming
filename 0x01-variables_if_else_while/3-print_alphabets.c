#include <stdio.h>

/**
  * main - prints both the upper & lower case lettes of the eng alphabet.
  *
  * Return: Always 0.
  */
int main(void)
{
	char alpha_;

	for (alpha_ = 'a'; alpha_ <= 'z'; alpha_++)
		putchar(alpha_);

	for (alpha_ = 'A'; alpha_ <= 'Z'; alpha_++)
		putchar(alpha_);

	putchar('\n');

	return (0);
}
