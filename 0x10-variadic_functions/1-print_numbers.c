#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers as parameters
 * @n: number of integers passed to the function
 * @separator: string to print between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list list;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && a == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}
