#include "main.h"

/**
 * read_textfile -  should read into the text file
 * @filename: parameter for our function
 * @letters:  is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t reading, x;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (!fd)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	reading = read(fd, buffer, letters);
	x = write(STDOUT_FILENO, buffer, reading);
	if (x == -1)
	{
		return (0);
	}

	close(fd);
	free(buffer);

	return (x);
}


