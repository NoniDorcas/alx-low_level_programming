#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function as a parameter of each rlrmrnt of an array
 * @array: array of integers
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
