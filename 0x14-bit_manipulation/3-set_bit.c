#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: index starting from 0
 * @n: binary number
 * Return: 1 if successful
 *         -1 if error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;
	unsigned int set;

	x = sizeof(n) * 8 - 1;
	if (x < index)
	{
		return (-1);
	}
	set = 1 << index;
	*n |= set;

	return (1);
}
