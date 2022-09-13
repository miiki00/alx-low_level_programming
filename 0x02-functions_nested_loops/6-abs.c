#include "main.h"

/**
 * _abs - computes the absolute value of i
 * @i: the number to be computed
 *
 * Return: the absolute value of i.
 */
int _abs(int i)
{
	int ret;

	if (i < 0)
	{
		ret = i * -1;
	}
	else if (i == 0)
	{
		ret = 0;
	}
	else
	{
		ret = i;
	}

	return (ret);
}
