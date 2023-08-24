#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - to execute a function that has been given as a parameter
 * @array: the array to iterate
 * @size: size of @array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (!array || !action)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}
