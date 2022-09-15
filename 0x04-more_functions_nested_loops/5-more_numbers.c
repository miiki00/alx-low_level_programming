#include "main.h"

/**
 * more_numbers - print numbers from 0 ro 14 10 times
 *
 * Return: Void.
 */
void more_numbers(void)
{
	int c_one, c_two, c_three;

	for (c_one = 0; c_one < 10; c_one++)
	{
		for (c_two = 0; c_two < 2; c_two++)
		{
			for (c_three = 0; c_three < 10; c_three++)
			{
				if (c_two == 1 && c_three == 5)
					break;
				else if (c_two == 1)
					_putchar('1');
				_putchar(c_three + '0');
			}
		}
		_putchar('\n');
	}
}
