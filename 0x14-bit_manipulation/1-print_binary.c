#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: base 10 number
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	int x;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i = n, x = 0; (i >>= 1) > 0; x++)
		;

	for (; x >= 0; x--)
	{
		if ((n >> x) & 1)
			printf("1");
		else
			printf("0");
	}
}
