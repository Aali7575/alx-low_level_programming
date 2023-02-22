
#include "main.h"

/**
 * print_alphabet - function
 * Description: function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Return: 0 success
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
