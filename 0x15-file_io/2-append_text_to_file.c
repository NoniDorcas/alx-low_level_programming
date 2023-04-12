#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string
 * Return: 1 on success
 *         -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int append;
	int wr;
	int str;

	if (filename == NULL)
	{
		return (-1);
	}
	append = open(filename, O_WRONLY | O_APPEND);
	if (append == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	for (str = 0; text_content[str];)
	str++;
	wr = write(append, text_content, str);
	close(append);

	return (wr == -1 ? -1 : 1);
}

