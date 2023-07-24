#include "main.h"
#include <stdio.h>

/**
* puts2 - prints every other character of a string
* @str: string to be printed
*/

void puts2(char *str)
{
	int i;
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		len = len;
	}

	for (i = 0; i < len; i = i + 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
