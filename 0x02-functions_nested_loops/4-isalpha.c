#include <stdio.h>
#include "main.h"

/**
 * _isalpha - this is to check for a letter
 * @c: the character to be checked
 * Return: 1 and 0 for success
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c<= 'Z'))
		return (1);
	else
		return (0);
}
