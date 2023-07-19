#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - generate 10 times of the alphabets
 */

void print_alphabet_x10(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int a = 0;

	while (a < 10)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alp[i]);
		}
	putchar('\n');
	a++;
	}
}
