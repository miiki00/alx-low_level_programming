#include "3-calc.h"

/**
 * op_add - adds two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of the numbers.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substracts b from a.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result of the subtraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies to numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result of the multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides a by b
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result of the division
 * if b == 0 exits with a status of 100.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calculates the remainder of a divided by b.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The rmainder of the division.
 * if b == 0 exits with a status of 100.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
