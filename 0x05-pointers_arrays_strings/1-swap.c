#include "holberton.h"

/**
 * swap_int - Swaps two integers
 *
 * @a: First number
 * @b: Second number
 *
 *
 * Return: Nothing (void)
 */

void swap_int(int *a, int *b)
{

	int tmp = *a;

	*a = *b;

	*b = tmp;

}
