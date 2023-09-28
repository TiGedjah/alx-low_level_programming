#include "main.h"

/**
 * set_bit - check the code
 * @n: decimal number
 * @index: index position
 * Return: 1 if it works, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aa;

	if (index > 64)
		return (-1);

	for (aa = 1; index > 0; index--, aa *= 2)
		;
	*n += aa;

	return (1);
}
