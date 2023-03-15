#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates array of chars and initializes it with a specific char
 * @size: size of array to be created
 * @c: initializes the array
 * Return NULL if size = 0
 * otherwise return pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)/*if computer is out of memory, null memory is alocated*/
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		s[n] = c;
	}
	return (s);
}
