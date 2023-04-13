#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * create_file - create a file with read/write access
 * @filename: name of file
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}
int fd = open(filename , O_WRONLY | O_CREAT | O_TRUNC , S_IRUSR | S_IWUSR);
if (fd == -1)
{
	return (-1);
}

if (text_content != NULL)
{
	ssize_t bytes= write(fd , text_content , strlen(text_content));

	if (bytes == -1)
	{
		close(fd);
		return (-1);
	}
}
close(fd);
return (1);
}

