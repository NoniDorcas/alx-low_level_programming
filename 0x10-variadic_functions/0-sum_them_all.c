#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters
 *
 * Return: 0 if n == 0
 *          else sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vf;
	unsigned int a;
	unsigned int sum = 0;

	va_start(vf, n);
	for (a = 0; a < n; a++)
		sum += va_arg(vf, int);
	va_end(vf);
	return (sum);
}
