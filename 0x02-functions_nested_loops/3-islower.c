#include "main.h"

/**
 *  _islower - tells if c is lower case or upper case.
 * @c: the character to be evaluated.
 *
 * Return: 1 if c is lowercase else 0.
 */
int _islower(int c)
{
	int ret;

	if (c < 122 && c > 97)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return (ret);
}
