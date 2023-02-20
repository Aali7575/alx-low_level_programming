#include <stdio.h>

/**
 * main - print if the number is positive nevgative or zeri
 *
 * Description: using the main function
 * this program prints "programming is positive,negative or zero
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
