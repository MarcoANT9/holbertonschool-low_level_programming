#include "search_algos.h"
#include <math.h>

/**
 * jump_search - This function searches a value in an array.
 *
 * @array: Array to search the values.
 * @size: Size of the array.
 * @value: Value to search.
 *
 * Description - This function uses the Jump search algorithm to look for a
 *               value via "blocks" which are of size sqrt(size), in each block
 *               the maximum value is compared to the desired value and, if the
 *               max is greater than the desired value, the algoritm proceeds
 *               with a linear search. The complexity is as follows:
 *                       → Time complexity: O(sqrt(n))
 *
 * Return: → The position in which the value is in the array.
 *         → -1 if the array is Null or if the value is not in the array.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = (size_t)sqrt(size), low = 0, up = step, idx;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", low, array[low]);

	while (value > array[up] && low + step < size)
	{
		low = low + step;
		up = up + step;
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", low, up);


	if (up > size - 1)
		up = size - 1;

	for (idx = low; idx <= up; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
