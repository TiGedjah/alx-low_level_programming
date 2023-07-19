#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - writes out the last digit of an integer
 * @i: represents the the integer
 * Return: the outcome of the script
 */

int print_last_digit(int i)
{
	int n;

	if (i < 0)
	{
		i = -i;
		n = i % 10;
	}
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
