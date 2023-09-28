#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - check the code
 * @b: character
 *
 * Return: Always return
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sumtotal, pow;
	int length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	for (pow = 1, sumtotal = 0, length--; length >= 0; length--, pow *= 2)
	{
		if (b[length] == '1')
			sumtotal += pow;
	}

	return (sumtotal);
}
