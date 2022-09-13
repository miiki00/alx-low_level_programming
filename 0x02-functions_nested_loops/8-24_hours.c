#include "main.h"

/**
 * jack_bauer - prints every minute in a day
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int hf, hs, mf, ms;

	hf = '0';
	while (hf <= '2')
	{
		hs = '0';
		while (hs <= '9')
		{
			mf = '0';
			while (mf <= '5')
			{
				ms = '0';
				while (ms <= '9')
				{
					_putchar(hf);
					_putchar(hs);
					_putchar(':');
					_putchar(mf);
					_putchar(ms);
					_putchar('\n');

					ms++;
				}
				mf++;
			}
			if (hf == '2' && hs == '3')
				break;
			hs++;
		}
		hf++;
	}
}
