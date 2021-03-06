#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Prints from any number to 98
 *
 * @n: Number which is the starting point
 *
 * Return: Nothing (void)
 *
 *
 *
 */

void print_to_98(int n)
{

	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n = n + 1;
		}

		else
		{
			printf("%d, ", n);
			n = n - 1;
		}

	}

	printf("%d", n);
	putchar('\n');

}
