#include "main.h"

/**
 * create_file -  this is the name of the function
 * @filename: this is the parameter for our function
 * @text_content: another parameter for our function
 * Return: 1 on successs -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writing = 0;
	int len = text_content ? strlen(text_content) : 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (!fd)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = " ";
	}
	for (i = 0; text_content[i]; i++)

	if (len > 0)
	{
	writing = write(fd, text_content, len);
	if (!writing)
	{
		close(fd);
		return (-1);
	}
	}
	close(fd);

	return (1);
}

