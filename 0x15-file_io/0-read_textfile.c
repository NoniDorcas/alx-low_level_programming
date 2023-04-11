#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include<sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a textfile and prints it
 *                 to the POSIX standard output
 * @letters: numbers of letter to read and print
 * @filename: name of the file
 * Return: actual number of letters
 *         0 if null, file cannot be opened
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fil;
	int wr, rd;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fil = open(filename, O_RDONLY);
	if (fil == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fil);
		return (0);
	}
	rd = read(fil, buffer, letters);
	close(fil);
	if (rd == -1)
	{
		free(buffer);
		return (0);
	}
	wr = write(STDOUT_FILENO, buffer, rd);
	free(buffer);
	if (wr == -1)
	{
		return (0);
	}
	return (wr);
}

