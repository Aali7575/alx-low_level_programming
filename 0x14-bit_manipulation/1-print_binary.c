#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints the binary rep of a num
 * @n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int value;
	int x;
	int num;

	for (x = 63; x >= 0; x--)
	{
		value >> x;

		if (value & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
