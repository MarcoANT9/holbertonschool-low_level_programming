#include "search_algos.h"

/**
 * linear_search - This function searches for a "value" in a list.
 *
 * @array: Array to search in.
 * @size: Size of the array.
 * @value: Value to search.
 *
 * Description - This function uses the linear search method to determine
 *               if a value exist or not inside of an array, that is traverse
 *               the array one element at a time to compare it with the desired
 *               value. The complexities of this method are as follows:
 *                       → Time complexity: O(n)
 *                       → Space complexity: O(1)
 *               Both complexities are worst case scenarios.
 *
 * Return: → The position in which the element is found in the list.
 *         → -1 if the list is Null or the element is not in the array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		printf("Hey");

	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);

}
