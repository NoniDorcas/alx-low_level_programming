#include "main.h"

/**
 * flip_bits - returns the nmber of bits to flip
 * @n: first number
 * @m: second number
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x;
	unsigned int y;
	unsigned int flip;

	x = sizeof(n) * 8 - 1;
	y = 0;
	flip = 0;
	while (y <= x)
	{
		if ((n & 1) != (m & 1))
			flip++;
	n >>= 1;
	m >>= 1;

	y++;
}

return (flip);
}
