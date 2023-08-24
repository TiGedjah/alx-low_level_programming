#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - earches for an integer
 * @array: array to perform the search
 * @size: array size
 * @cmp: pointer to compare function
 *
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
				return (a);
		}
	}

	return (-1);
}
