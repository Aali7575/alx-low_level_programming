#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Append text to the end of a file
 * @file_x: name of file
 * @file_y: string to add to end of file
 * @argv: pointer of strings
 * error_file: this is our global variable
 * Return: 1 on success, -1 on failure
 */

void error_file(int file_x, int file_y, char *argv[])
{
	if (file_x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

int main(int argc, char *argv[])
{
	int file_x;
	int file_y, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_x file_y");
		exit(97);
	}

	file_x = open(argv[1], O_RDONLY);
	file_y = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_x, file_y, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_x, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_y, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_x);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_x);
		exit(100);
	}

	err_close = close(file_y);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_x);
		exit(100);
	}
	return (0);
}
