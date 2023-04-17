#include <stdio.h>
#include "main.h"

/**
 * get_bit - gets bit
 * @n:is the  decimal number
 * @index: index of the bit
 * Return: the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= sizeof(n) * len)
		return (-1);

	return ((n >> index) & 1);
}
