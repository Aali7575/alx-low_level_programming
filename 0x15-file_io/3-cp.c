#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - Append text to the end of a file
 * @filename: name of file
 * @text_content: string to add to end of file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedes;
	int x;
	int y;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	filedes = open(filename, O_APPEND | O_WRONLY);
	if (filedes == -1)
		return (-1);

	for (y = 0; text_content[y] != '\0'; y++)

		x = write(filedes, text_content, y);
	if (x == -1)
		return (-1);

	close(filedes);
	return (1);
}

