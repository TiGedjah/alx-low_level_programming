#include <stdio.h>
#include "main.h"

/**
 * print_sign - show if a number is positive or negative
 * @n: the number too determine its sign
 * Return: the success value
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
