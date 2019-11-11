#include "holberton.h"

/**
 * set_bit - Sets a bit in a given index.
 *
 * @n: Number to set the bit in index.
 * @index: Where to set the number.
 *
 * Description - This program takes a unsigned integer and sets a bit in a
 *               given position.
 *
 * Return: →  1 on success.
 *         → -1 on failure.
 */



int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	else
	{
		unsigned int mask = 1 << index;
		*n = (*n | mask);
		return (1);

	}
}
