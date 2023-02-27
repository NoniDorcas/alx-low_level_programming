#include "main.h"

/**
 * swap_int(int *a, int *b) - swaps the values of teo integers
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int first_integer = *a;
	int second_integer = b;
	*a = second_integer;
	*b = first_integer;
}
