#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints out the reverse of the string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int i, j;
	char *temp_s[100];

	for (i = 0; s[i] != '\0'; i++)
	{
		i = i;
	}

	for (i = i - 1; i >= 0; i--)
	{
		j = 0;
		*temp_s[j] = s[i];
		j++;
	}

	for (j = 0; s[j] != '\0'; j++)
	{
		*s[j] = temp_s[j];
	}

}
