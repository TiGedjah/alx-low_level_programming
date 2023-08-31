#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - to convert a binary number into an unsigned int
 * @b: char string
 *
 * Return: number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x, a;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (a = 1, x = 0, i--; i >= 0; i--, a *= 2)
	{
		if (b[i] == '1')
			x += a;
	}

	return (x);
}
