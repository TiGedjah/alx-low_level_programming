#include "main.h"
#include <stdio.h>

/**
 * main - print _putchar
 * is written by Titus
 * Return: 0
 */

int main(void)
{
	int b;
	char a[8] = "_putchar";

	for (b = 0; b < 8; b++)
	{
		_putchar(a[b]);
	}
	_putchar('\n');
	return (0);
}
