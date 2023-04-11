#include "main.h"

/**
 * get_endianness - check if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int number = 1;
	char *address = (char *)&number;

	if (*address)
		return (1);
	else
		return (0);
}
