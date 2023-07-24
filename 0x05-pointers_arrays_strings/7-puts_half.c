#include "main.h"
#include <stdio.h>

/**
* puts_half - prints the last half of a string
* @str: string to be printed
*/

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		i = i;
	}

	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			putchar(str[j]);
		}
	}
	else if (i % 2 == 1)
	{
		for (j = i / 2 + 1; j < i; j++)
		{
			putchar(str[j]);
		}
	}

	putchar('\n');
}
