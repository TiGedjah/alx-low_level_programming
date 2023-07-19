#include <stdio.h>
#include "main.h"

/**
 * _islower - tells is the a character is in lower case
 *
 * @c: the character study
 * Return: 1 if lower and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
