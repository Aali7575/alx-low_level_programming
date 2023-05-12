#include "main.h"

/**
 *  append_text_to_file - function that appends text at the end of a file.
 *  @filename: name of the file
 *  @text_content: string to add at the end of the file
 *  Return: 1 if file exists -1 if it does not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	if (!fd)
	{
		return (-1);
	}

	if (!text_content)
	{
		return (-1);
	}
	else
	{
		written = write(fd, text_content, strlen(text_content));
	}
	if (!written)
	{
		return (-1);
	}
	return (1);
}
