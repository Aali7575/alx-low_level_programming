#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)

{
	int i;
	unsigned int value = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		value = (value << 1) + (b[i] - '0');
	}
	return (value);
}
