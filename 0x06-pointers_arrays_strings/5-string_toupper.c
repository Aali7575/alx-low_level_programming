#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @s: string to make upper
 * Return: return value of upper
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] = str[index] - 32;

		index++;
	}

	return (str);
}
