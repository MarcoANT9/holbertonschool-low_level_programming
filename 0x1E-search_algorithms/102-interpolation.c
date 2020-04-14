#include "search_algos.h"

/**
 * interpolation_search - Searches an element into an array
 *
 * @array: Array to search in.
 * @size: Size of the array.
 * @value: Value to search.
 *
 * Description -This function uses the interpolation search method to determine
 *              if a value exist or not inside of an array. The time complexity
 *              is exposed bellow:
 *                       → O(1) Best case scenario
 *                       → O(log(log(n))) Average scenario.
 *                       → O(n) Worst case scenario.
 *
 * Return: → The position in which the element is found in the list.
 *         → -1 if the list is Null or the element is not in the array.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, l = 0, u = size - 1;
	int vl = value;


	while ((array[u] != array[l] && (vl >= array[l]) && vl <= array[u]))
	{
		pos = l + (((double)(u - l) / (array[u] - array[l])) *
			   (vl - array[l]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] < vl)
			l = pos + 1;
		else if (vl < array[pos])
			u = pos - 1;
		else
			return (pos);
	}

	if (array[l] == value)
		return (l);

	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
