#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: string
 * Return: 1 if successful
 *         0 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int file_text;
	int wr;
	int str;

	if (filename == NULL)
	{
		return (-1);
	}
	file_text = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_text == -1)
	{
	return (-1);
	}
	if (text_content == NULL)
	{
	close(file_text);
	return (1);
	}
	for (str = 0; text_content[str]; str++)
	wr = write(file_text, text_content, str);
	if (wr == -1)
	{
	return (-1);
	}
	close(file_text);

	return (1);
}




