#include "holberton.h"

/**
 * get_bit - Gets a bit from a number.
 *
 * @n: Decimal number to get bit.
 * @index: Position to get the index from.
 *
 *
 * Description - Searches for a bit in a number given an index and return its
 *               value.
 *
 * Return: Bite value at index, -1 if it fails.
 */



int get_bit(unsigned long int n, unsigned int index)
{
	int counter;

	while ((n >> counter) != 0)
	{
		counter++;
	}
	counter--;

	if (counter < index)
		return (-1);

	else
		return ((n & (1 << index)) != 0);
}
