#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * main -  a function that reads a text file and prints it
 * to the POSIX standard output.
 *@filename: name of file to read
 *@letters: num of letters it should read and print
 * Return: 0 if the file can not be opened or read
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufferr;
	int filedes;
	ssize_t x;
	ssize_t y;

	if (!filename)
		return (0);

	filedes = open(filename, O_RDONLY);

	if (filedes == -1)
		return (0);

	bufferr = malloc(sizeof(char) * (letters));
	if (!bufferr)
		return (0);

	x = read(filedes, bufferr, letters);
	y = write(STDOUT_FILENO, bufferr, x);

	close(filedes);

	free(bufferr);

	return (y);
}


