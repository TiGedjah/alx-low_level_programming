#include <stdio.h>
#include "main.h"

/**
 * swap_int - this function is ti swap integers with memory spaces
 * @a: integer 1
 * @b: integer 2
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
