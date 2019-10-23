#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each
 *                  element of the array.
 *
 * @array: Array of elements.
 * @size: Size of the array.
 * @action: Action to perform.
 *
 * Description - This program takes an array, its size and a pointer to a
 *               function to perform on every element of the array.
 *
 * Return: Nothing (void).
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0; /** Index */

	while (i < size)
	{
		action(array[i]);
		i++;
	}

}
