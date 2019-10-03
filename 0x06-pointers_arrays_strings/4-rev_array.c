#include "holberton.h"

/**
 * reverse_array - Reverses an array
 *
 * @a: Array to reverse
 * @n: Length of the array
 *
 *
 * Return: Nothing (void)
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp[];


	n = n - 1;

	while (i <= n)
	{
		tmp[i] = *(a + i);
		i = i + 1;
	}
	i = 0;
	while (n >= 0)
	{
		*(a + i) = tmp[n];
		n = n - 1;
		i = i + 1;
	}
}
