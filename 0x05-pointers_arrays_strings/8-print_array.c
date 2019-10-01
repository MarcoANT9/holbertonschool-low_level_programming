#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints the elements of an array of integers
 *
 * @a: Array to print
 * @n: Length of the array
 *
 *
 * Return: Nothing (void)
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{

		if (i == (n - 1))
		{
			printf("%d", *(a + i));
		}
		else
		{
			printf("%d, ", *(a + i));
		}

		i = i + 1;
	}
	printf("\n");
}
