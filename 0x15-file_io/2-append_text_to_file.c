#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text
 * @filename: filename.
 *  @text_content: added content.
 *  Return: on success or -1  on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *myfile;
	int outcome;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}
	myfile = fopen(filename, "a");

	if (myfile == NULL)
	{
		return (-1);
	}
	outcome = fputs(text_content, myfile);
	fclose(myfile);

	if (outcome == EOF)
	{
		return (-1);
	}
	return (1);
}



