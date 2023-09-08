#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - adds a text at the end of a file
 * @filename: points to the name of the file
 * @text_content: string to be added to the end of the file
 *
 * Return: Always the result
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, x = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (x = 0; text_content[x];)
			x++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, x);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
