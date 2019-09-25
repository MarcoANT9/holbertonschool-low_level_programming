#include <stdio.h>


/**
 * main - writes the sum og the even-valued terms of the fibonacci sequence
 * only considers the terms below 4'000.000
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{

	unsigned long int f1 = 1, f2 = 2, sumf, sump;

	sumf = f1 + f2;

	sump = f2;
	while (sumf < 4000000)
	{
		sumf = f1 + f2;
		f1 = f2;
		f2 = sumf;

		if (sumf % 2 == 0)
		{
			sump = sump + sumf;
		}

	}

	printf("%lu\n", sump);


	return (0);
}
