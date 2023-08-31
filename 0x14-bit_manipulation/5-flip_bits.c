#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to 
 * flip to get from one number to another.
 * @n: number a
 * @m: number b
 *
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	int c;

	a = n ^ m;
	c = 0;

	while (a)
	{
		c++;
		a &= (a - 1);
	}

	return (c);
}
