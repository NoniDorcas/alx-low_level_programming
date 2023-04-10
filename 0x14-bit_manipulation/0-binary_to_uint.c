#include "main.h"

/**
 * binary_to_uint - converst a binary number
 *                 to an unsigned int
 *@b: pointer to a string of 1s and 0s

 *Return: converted number if successful
 *      0 if b is null
 */

unsigned int binary_to_uint(const char *b)
{
	int dec;
	int x;

	for (dec = 0; x = 0; b[x] != '0/'; x++)
	{
	if ( b[x] == 1)
	dec <<= 1;
	else if (b[x] == 0)
	dec <<= 0;
	else if ( b[x] != '1' && b[x] != '0' )
	return (0)
	}
}
