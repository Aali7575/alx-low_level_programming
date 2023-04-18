#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int i = 0;
	unsigned int value = 0;

	if (b[i] == '\0')
	{
		return (0);
	}
	else
	{
		for (; b[i]; i++)
		{
			if (b[i] == '1' || b[i] == '0')
			{
				value = value << 1;
				value = value + (b[i] - '0');
			}
			else
			{
				return (0);
			}
		}
		return (value);
	}
}

