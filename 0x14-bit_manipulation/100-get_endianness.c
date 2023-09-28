#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the code
 * Return: Always Return
 */
int get_endianness(void)
{
	int an;

	an = 1;
	if (*(char *)&an == 1)
		return (1);
	else
		return (0);
}
