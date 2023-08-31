#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 or 1 if little endian
 */

int get_endianness(void)
{
	int x;

	x = 1;

	if (*(char *)&x == 1)
		return (1);
	else
		return (0);
}
