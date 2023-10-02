#include <stdio.h>
#include "main.h"

/**
 * create_file - CHecks the code
 * @filename: the name of the file
 * @text_content: a string to write
 *
 * Return: Always Return
 */
int create_file(const char *filename, char *text_content)
{
        int a, b, lenn = 0;

        if (filename == NULL)
                return (-1);

        if (text_content != NULL)
        {
                for (lenn = 0; text_content[lenn];)
                        lenn++;
        }

        a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
        b = write(a, text_content, lenn);

        if (a == -1 || b == -1)
                return (-1);

        close(a);

        return (1);
}
