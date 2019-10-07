#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of both diagnonals on a square matrix.
 *
 * @a: A pointer to the matrix.
 * @size: Size of the square matrix.
 *
 * Description - Sums the values of both diagonals on ma square matrix, first
 *               it prints the sum of the principal diagonal and second the
 *               result of the opposite diagonal. WARNING: DO NOT try to
 *               replicate at home.
 *
 * Return: Nothing (void).
 *
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;
	int pos1 = 0;
	int pos2 = 0;

	for (i = 0; i < (size); i++)
	{
		pos1 = ((size - 1) * (i + 1));
		sum1 = sum1 + a[pos1];
		pos2 = ((size + 1) * i);
		sum2 = sum2 + a[pos2];
	}
	printf("%d, %d\n", sum2, sum1);
}
