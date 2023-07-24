#include <stdio.h>
#include "main.h"

/**
 * _puts - prints out a string
 * @str: the string to be printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
