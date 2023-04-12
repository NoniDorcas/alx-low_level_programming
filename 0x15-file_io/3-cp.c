#include <stdio.h>
#include <stdlib.h>
#include <unistd>

/**
 * main - entry point
 *
 */

int main(int arg, char *ar)
{
	int file_from;
	int file_to;
	int wr;
	int rd;
	char buffer(1024);
	mode_t file_perm;

	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	file_from = open(ar[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant read from the file %s\n", ar[1], exit(98);
	}
	file_to = open(ar[2], O_CREAT | O_WRONLY | O_TRUNC, file_perm);
	if (file_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: cant write to the file %s\n", ar[2], exit(99);
			}



