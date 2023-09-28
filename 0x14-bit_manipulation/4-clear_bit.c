#include "main.h"
#include <stdio.h>
/**
 * clear_bit - checks the code
 * @n: pointer
 * @index: index position
 * Return: 1 if it works, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aa;
	unsigned int ab;

	if (index > 64)
		return (-1);
	ab = index;
	for (aa = 1; ab > 0; aa *= 2, ab--)
		;

	if ((*n >> index) & 1)
		*n -= aa;

	return (1);
}
