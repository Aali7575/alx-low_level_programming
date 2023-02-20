#include <time.h>
#include <stdio.h>

/**
 * main - print if the number is positive nevgative or zeri
 *
 * Description: using the main function
 * this program prints "programming is positive,negative or zero
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
				
				if (c > b; &&b > a)
				{
					putchar(a + '0');
					 putchar(b + '0');
					  putchar(c + '0');
					  if (a != 7 || b != 8 || c != 9)
					  {
						  putchar(',');
							  putchar(',');
					  }
				}
		}
	}
}
putchar('\n');
return (0);
}

