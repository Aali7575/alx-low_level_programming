#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text
 * @filename: filename.
 *  @text_content: adde
 *  Return: 1 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedes;
	int bytes;
	ssize_t text_size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_size])
			text_size++;
	}

	filedes = open(filename, O_WRONLY | O_APPEND);
	if (filedes == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes = write(filedes, text_content, text_size);
		if (bytes == -1)
		{
			close(filedes);
			return (-1);
		}
	}

	close(filedes);
	return (1);
}

