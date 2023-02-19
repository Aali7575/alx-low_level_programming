#include <stdlib.h>
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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		/*here is my code*/

		if (n > 0)
		{
			printf("%i is positive\n", n);
		}
		else if (n == 0)
		{
			printf("%i is zero\n", n);
		}

		else
		{
			printf("%i is negative\n", n);
		}
	return (0);
}

