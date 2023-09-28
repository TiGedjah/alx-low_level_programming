#include "main.h"
#include <stdio.h>

/**
 * print_binary - check the code
 * @n: decimal  number
 */
void print_binary(unsigned long int n)
{
	unsigned long int ab;
	int bb;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (ab = n, bb = 0; (ab >>= 1) > 0; bb++)
		;

	for (; bb >= 0; bb--)
	{
		if ((n >> bb) & 1)
			printf("1");
		else
			printf("0");
	}
}
