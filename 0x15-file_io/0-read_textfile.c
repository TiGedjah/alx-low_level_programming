#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Checks the code
 * @filename: the name of the file.
 * @letters: The number of letters
 *
 * Return: Always Return
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t a, b, c;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	b = read(a, buff, letters);
	c = write(STDOUT_FILENO, buff, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(a);

	return (c);
}
