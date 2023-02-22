#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 *
 * Description: Alphabet is printed with a for loop. Process
 * is repeated ten times with while loop.
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 0;
	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++;
		_putchar('\n');
	}
}
