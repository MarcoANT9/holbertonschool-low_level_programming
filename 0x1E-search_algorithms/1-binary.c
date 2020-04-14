#include "search_algos.h"

/**
 * binary_search - This function searches for a value in an array.
 *
 * @array: Array to search.
 * @size: Size of the array.
 * @value: Value to search.
 *
 * Description - This function uses the binary search method to look for a
 *               value inside an array, this method selects the middle element
 *               of a sorted array and compares it to the value, if the value
 *               is greater than the searched value, the algorithm searches
 *               in the lower half of the array, the same is true if the value
 *               is greater. The complexities of this method are:
 *                       → Time complexity: O(log(n)) worst case.
 *                       → Space complexity: O(1) worst case.
 *	         The function returns the index in which the desired value is
 *               found or -1 if either the value doesn't exist or the array is
 *               Null.
 *
 * Return: → Position where the value is found.
 *         → -1 if the value doesn't exists or the array is Null.
 *
 */
int binary_search(int *array, size_t size, int value)
{

	size_t Left = 0, Right = size - 1, middle, index;

	if (array == NULL)
		return (-1);

	while (Left <= Right)
	{
		index = Left;
		printf("Searching in array: ");

		while (index <= Right)
		{
			printf("%d", array[index]);
			if (index == Right)
				printf("\n");
			else
				printf(", ");
			index++;
		}
		middle = (Left + Right) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			Left = middle + 1;
		else
			Right = middle - 1;
	}
	return (-1);
}
