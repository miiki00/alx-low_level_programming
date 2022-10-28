#include "main.h"
/**
 * _pow - calculates @a raised to @b.
 * @a: The number to be powered.
 * @b: The number to power.
 *
 * Return: The value calculated on error -1.
 */
int _pow(int a, int b)
{
	int ret, i;

	if (b == 0)
		return (1);
	if (b < 0)
		return (-1);
	for (i = 0, ret = a; i < b - 1; i++)
		ret = ret * a;
	return (ret);
}

/**
 * _strlen - countes the length of a string.
 * @s: The address of the first string.
 *
 * Return: The length of the string.
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
 * binary_to_uint - converts binary into unsigned int.
 * @b: String containing the binary number.
 *
 * Return: The number converted or 0 on error.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, sum;

	if (b == NULL)
		return (0);
	j = sum = 0;
	for (i = _strlen(b) - 1; i >= 0; i--, j++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		if (b[i] == 49)
			sum = sum + _pow(2, j);
	}
	return (sum);
}
