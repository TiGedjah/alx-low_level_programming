#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index starting from 0
 *
 * Return: Value or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);

	x = n >> index;

	return (x & 1);
}
