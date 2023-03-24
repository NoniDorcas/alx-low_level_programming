#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line.
 * @separator: string to print between the strings
 * @n: number of strings to print
 *
 * Return: void if separator is NULL
 *         nil If any string is NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *str;
	va_list va;

	va_start(va, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(va, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (a < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(va);
}
