#include <stdio.h>

/**
  * main - prints single digit numbers of base 16 numbers.
  *
  * Return: Always 0.
  */
int main(void)
{
	int i;
	char c;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	for (c = 'a'; c < 'g'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
