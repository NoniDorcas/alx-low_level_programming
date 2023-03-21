#include <stdio.h>

/**
 * main - entry pont
 * Desc: prints the name of the file
 *       from which it was compiled from
 * Return: 0;
 */

int main (void)
{
	printf("%s\n", _FILE_);

	return (0);
}
