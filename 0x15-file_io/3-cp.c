#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat>
#include <fcntl>

/**
 * main - entry point
 * Return: 0
 */

int main(int arg, char *ar)

	char buffer(1024);

	mode_t fil_perm;

	int fil_from, fil_to;

	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp fil_from fil_to\n"), exit(97);
	}
	fil_from = open(ar[1], O_RDONLY);
	if (fil_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: cant read from fil_from %s\n", ar[1], exit(98);
	}
	fil_to = open(ar[2], O_CREAT | O_WRONLY | O_TRUNC, fil_perm);
	if (file_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: cant write to fil_to %s\n", ar[2], exit(99);
	}
	int rd = 1;

	while (rd)
	rd = read(fil_from, buffer, 1024);
	if (rd == -1)
	{
	dprintf(STDERR_FILENO, "Error: cant read from fil_from %s\n", ar[1], exit(98);
	}
			int wr;

			wr = write(fil_to, buffer, rd);
			if (wr == -1)
			{
			dprintf(STDERR_FILENO, "Error: cant write to fil_to %s\n", ar[2], exit(99);
					}
				if (close(file_from) == -1)
			dprintf(STDERR_FILENO, "Error: cant close file %d\n", file_from, exit(100));
					if (close(fil_to) == -1)
					dprintf(STDERR_FILENO, "Error: cant close file %d\n", fil_to, exit(100));

						return (0);
						}
