#include <stdio.h>
#include "holberton.h"

/**
 * main - writes the first 50 numbers of the fibonacci numbers
 *
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int i;
	unsigned long int f1 = 1, f2 = 2, sum;

	printf("%lu, %lu, ", f1, f2);

	for (i = 0; i < 48; i++)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;

		printf("%lu", sum);

		if (i != 47)
		{
			putchar(',');
			putchar(' ');
		}



	}

	putchar('\n');


	return (0);
}
