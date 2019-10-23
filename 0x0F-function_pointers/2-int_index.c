#include "function_pointers.h"


/**
 * int_index - Searches for an integer.
 *
 * @array: Array to search for an integer.
 * @size: Size of the array.
 * @cmp: Function to compare.
 *
 * Description - This program will search for an integer in a given array,
 *               comparing it with the functions specified by the cmp pointer.
 *
 * Return: → If a match is found, return the index of the first match.
 *         → If no element is matched or if size is less than 0, return -1.[B
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int pos = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	while (pos < size)
	{
		if (cmp(array[pos]) != 0)
		{
			return (pos);
		}
		pos++;
	}
	return (-1);
}
