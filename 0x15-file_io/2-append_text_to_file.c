#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - Checks the code
 * @filename: the name of the file
 * @text_content: The string to add
 *
 * Return: Always Return
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b;
	int lenn = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenn = 0; text_content[lenn];)
			lenn++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, lenn);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
