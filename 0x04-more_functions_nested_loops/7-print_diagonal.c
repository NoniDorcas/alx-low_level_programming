#include "main.h"

/**
 * print_diagonal - draws a diagnal line on the terminal
 * @n - the number of characters that should be printed
 */
void print_diagonal(int n);
{
	int length, space;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (space = 0; space < length; space++)
				_putchar(' ');
			_putchar('\\');

			if (length == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
