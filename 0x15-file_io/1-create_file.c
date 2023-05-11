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
	ssize_t writing;
	int len = strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR | O_TRUNC);
	if (!fd)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = " ";
	}
	writing = write(fd, text_content, len);
	if (!writing)
	{
		return (-1);
	}
	close(fd);

	return (0);
}

