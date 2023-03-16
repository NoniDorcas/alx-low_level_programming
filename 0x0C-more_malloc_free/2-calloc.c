#include "main.h"
#include <stdlib.h>

/**
 * calloc - allocates memory for an array using malloc
 *
 * @nmemb: array elements
 * @size: size of bytes allocated
 *
 * Return: NULL when nmemb or size is 0
 *         otherwise pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		s[i] = 0;

	return (s);
}
