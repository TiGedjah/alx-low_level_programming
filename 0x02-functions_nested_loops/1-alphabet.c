#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints all the alphabet.
 */
void print_alphabet(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alp[i]);
	}
	putchar('\n');
}
