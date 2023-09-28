#include "main.h"
#include <stdio.h>

/**
 * flip_bits - checks the code
 * @n: first number
 * @m: second number
 * Return: Always return
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ab;
	int aa;

	ab = n ^ m;
	aa = 0;

	while (ab)
	{
		aa++;
		ab &= (ab - 1);
	}

	return (aa);
}
