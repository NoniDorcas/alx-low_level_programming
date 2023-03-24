#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	int number;
	va_list vf;

	va_start(vf, n);

	for (a = 0; a < n; a++)
	{
		number = va_arg(vf, int);
		printf("%d", number);

		if (a < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(vf);
}
