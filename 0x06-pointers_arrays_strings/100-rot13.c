#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int str_cnt = 0, al_cnt;
	char alpha[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_alpha[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[str_cnt] != 0)
	{
		for (al_cnt = 0; al_cnt < 52;)
		{
			if (s[str_cnt] == alpha[al_cnt])
			{
				s[str_cnt] = rot_alpha[al_cnt];
				break;
			}
			al_cnt++;
		}
		str_cnt++;
	}
	return (str);
}
