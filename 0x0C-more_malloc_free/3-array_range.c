#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 *
 * @min: Minimum Number to allocate.
 * @max: Maximum Number to allocate.
 *
 * Description - Creates an array of integers containing all the numbers
 *               from Min to Max and returns a pointer to the new array.
 *
 * Return: → Pointer to new array if successfull.
 *         → NULL if malloc fails or if min > max.
 */

int *array_range(int min, int max)
{
	int i, diff;
	int *ar;

	if (min > max)
	{
		return (NULL);
	}

	diff = (max - min) + 1;
	ar = malloc(sizeof(int) * diff);

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < diff; i++)
	{
		ar[i] = min + i;
	}

	return (ar);
}
