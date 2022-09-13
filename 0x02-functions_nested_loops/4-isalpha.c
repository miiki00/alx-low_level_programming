#include "main.h"

/**
 * _isalpha - tells if c is a letter or not
 * @c: the character to be checked.
 *
 * Return: 1 if c is a letter else 0.
 */
int _isalpha(int c)
{
	int ret;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}

	return (ret);
}
