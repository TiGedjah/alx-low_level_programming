#include "3-calc.h"

/**
 * op_add - calculate sum of two integers
 * @a: first int
 * @b: second int
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate difference of two integers
 * @a: first int
 * @b: second int
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate product of two integers
 * @a: first int
 * @b: second int
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculate division of two integers
 * @a: first int
 * @b: second int
 *
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculate remainder of the division of two integers
 * @a: first int
 * @b: second int
 *
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
