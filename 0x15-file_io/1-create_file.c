#include <stdio.h>
#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: points to the name of file to be created
 * @text_content: points to a string to write to the file
 *
 * Return: Always the desired result
 */

int create_file(const char *filename, char *text_content)
{
	int a, b, x = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (x = 0; text_content[x];)
			x++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, x);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
