#include "main.h"
#include <stdio.h>
/**
 * get_bit - check the code
 * @n: number
 * @index: index
 * Return: Always Return
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int aa;

	if (index > 64)
		return (-1);

	aa = n >> index;

	return (aa & 1);
}
