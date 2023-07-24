#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints out the string in reverse mode
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		i = i;
	}
	for (i = i - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
