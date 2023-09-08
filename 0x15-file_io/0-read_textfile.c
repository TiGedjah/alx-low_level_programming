#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a file and prints it to the POSIX standard output.
 * @filename: the name of the file.
 * @letters: The number of letters
 *
 * Return: Always the result
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *storage;

	if (filename == NULL)
		return (0);

	storage = malloc(sizeof(char) * letters);
	if (storage == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	b = read(a, storage, letters);
	c = write(STDOUT_FILENO, storage, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(storage);
		return (0);
	}

	free(storage);
	close(a);

	return (c);
}
