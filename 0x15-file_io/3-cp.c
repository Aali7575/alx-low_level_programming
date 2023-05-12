#include "main.h"
#include <stdio.h>

/**
 * main - copying from one file to another
 * error: return exit
 * cp file_from file_to - coping from one file to another
 * @file_to: if it exists, truncate it
 * @file_from: on failure exit with code 98
 * @argv: argument value
 * NAME_OF_THE_FILE: 1st argument passed to the program
 * FD_VALUE: value of the descriptor
 * Return:
 */

void error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t x, y;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error(file_from, file_to, argv);

	x = 1024;
	while (x == 1024)
	{
		x = read(file_from, buf, 1024);
		if (x == -1)
			error(-1, 0, argv);
		y = write(file_to, buf, x);
		if (y == -1)
			error(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
