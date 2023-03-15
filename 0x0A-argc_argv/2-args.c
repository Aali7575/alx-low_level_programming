#include "main.h"
#include <stdio.h>

/**
 * main - program that  prints all the arguments it receives
 * @argc: argument count
 * @argv: character of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
