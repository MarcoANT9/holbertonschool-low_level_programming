#include "holberton.h"

/**
 * clear_bit - Sets a bit to 0 in a given index.
 *
 * @n: Number to clear the bit in index.
 * @index: Where to set the number.
 *
 * Description - This program takes a unsigned integer and clears a bit in a
 *               given position.
 *
 * Return: →  1 on success.
 *         → -1 on failure.
 */



int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	else
	{
		unsigned int mask = 1 << index;
		*n = (*n & ~mask);
		return (1);

	}
}
