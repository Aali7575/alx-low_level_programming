#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  a function that reads a text file and prints it
 * to the POSIX standard output.
 *d_textfile: where letters is the number of letters
 *@filename name of file to read
 *@letters num of letters it should read and print 
 * Return: 0 if the file can not be opened or read
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *filename;
	int letters;
	char buffer[100];

	filename = fopen("read_textfile.txt", "r");
	if (filename == NULL)
	{
		return (0);
	}
	letters = fread(buffer, sizeof(char),100,filename);
	
