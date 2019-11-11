#include "holberton.h"

/**
 * get_bit - Gets a bit in a given index.
 *
 * @n: Number to get the bit in index.
 * @index: Where to get the number.
 *
 * Description - This program takes a unsigned integer and gets a bit in a
 *               given position.
 *
 * Return: → Bit at index on success.
 *         → -1 on failure.
 */



int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	else
	{
		unsigned int mask = 1 << index;
		return ((n & mask) >> index);

	}
}
