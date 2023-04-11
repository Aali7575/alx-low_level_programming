#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y = (sizeof(n) * BYTE_LENGHT);
	int x = 0;

	while (y--)
		x += (n >> y & 1) != (m >> y & 1);
	return (x);
}

