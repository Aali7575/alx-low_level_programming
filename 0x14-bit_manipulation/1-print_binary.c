#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary
 * @n: number to print
 */

void print_binary(unsigned long int n)
{
	int num, x;
	unsigned long int current;

	for (x = 63; x >= 0; x--)
	{
		current = n >> x;

		if (current & 1)
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
