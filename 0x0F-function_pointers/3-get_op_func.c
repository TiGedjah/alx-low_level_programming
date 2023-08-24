#include "3-calc.h"

/**
 * get_op_func - function pointer
 * @s: the operator
 *
 * Return: pointer to the corresponding function
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
	int a;

	a = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[a].op, s) == 0)
			return (ops[a].f);
		a++;
	}

	return (NULL);
}
