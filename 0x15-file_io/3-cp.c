#include <stdio.h>
#include <stdlib.h>
#include "main.h"


char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes to a buffer
 * @file: file name
 *
 * Return: always the result
 */

char *create_buffer(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (b);
}

/**
 * close_file - Closes all file descriptors
 * @fd: file descriptor to be closed
 */

void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies all contents of a file to a different file
 * @argv: An array of pointers
 * @argc: The number of arguments supplied
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int source, dest, a, b;


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	source = open(argv[1], O_RDONLY);
	a = read(source, buffer, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		b = write(dest, buffer, a);
		if (dest == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		a = read(source, buffer, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (a > 0);

	free(buffer);
	close_file(source);
	close_file(dest);

	return (0);
}
