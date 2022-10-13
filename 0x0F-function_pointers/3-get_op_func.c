#include "3-calc.h"

/**
 * get_op_func - Check the passed operator and return
 * the corresponding function.
 * @s: The passed operator.
 *
 * Return: A pointer to the correspondig function.
 * on error NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
