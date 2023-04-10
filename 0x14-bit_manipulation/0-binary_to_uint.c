#include "main.h"

/**
 * binary_to_uint - converst a binary number
 *                 to an unsigned int
 * @b: pointer to a string of 1s and 0s
 * Return: converted number if successful
 *      0 if b is null
 */

unsigned int binary_to_uint(const char *b)
{
	int bin;
	unsigned int x;

	x = 0;
	if (!b)
	{
		return (0);
	}
	for (bin = 0; b[bin] != '0/'; bin++)
	{
	if (b[bin] != '1' && b[bin] != '0')
	{
		return (0);
	}
	x <<= 1;
	x += 1;
	}

	return (x);
}
