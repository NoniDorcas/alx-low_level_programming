#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: index starting from 0
 * @n: binary number
 * Return: value of bit at index
 *         -1 incase of error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	x = sizeof(n) * 8 - 1;
	if (index > x)
	{
		return (0);
	}
	return (n >> index);
}
