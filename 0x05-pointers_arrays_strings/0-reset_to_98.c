#include "main.h"
#include <stdio.h>
/**
 * main - a function that takes a pointer to an int
 * Description: a function that takes a pointer to an int as parameter
 *  and updates the value it points to to 98.
 *  Return: Nothinig
 *   reset_to_98 - Takes a pointer to an int and updates
 *    the value it points to 98
 *   @n: An integer input pointer
 */
void reset_to_98(int *n)
{
	*n = 98;
}
