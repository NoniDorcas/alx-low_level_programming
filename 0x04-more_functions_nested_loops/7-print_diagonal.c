#include "main.h"

/**
 * print_diagonal - draws a diagnal line on the terminal
 * @n - the number of characters that should be printed
 */
void print_diagonal(int n);
{
	int slash;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (slash = 0; slash < n; slash++)
		{
			for (space = 0; space < slash; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
