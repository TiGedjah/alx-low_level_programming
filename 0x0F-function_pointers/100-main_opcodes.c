#include <stdio.h>
#include <stdlib.h>

/**
 * main - print own opcodes
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", a[i]);
			break;
		}
		printf("%02hhx ", a[i]);
	}
	return (0);
}
