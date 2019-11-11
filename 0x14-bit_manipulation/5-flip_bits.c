#include "holberton.h"

/**
 * flip_bits - Counts the number of bits that need to be changed to get
 *             from one number to the other.
 *
 * @n: First Number to check (beginning).
 * @m: Second number to check (goal).
 *
 * Description - This program takes two unsigned integer and compares them
 *               to determine the number of bits that need to be changed to
 *               get from one number to another.
 *
 * Return: Number of bits that need to be changed.
 */



unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index = 0;
	int n_mask, m_mask;
	unsigned int counter = 0;
	unsigned int mask = 1;


	while (index < 32)
	{
		n_mask = n & mask;
		m_mask = m & mask;

		if (n_mask != m_mask)
			counter++;

		if (index != 32)
			mask = mask << 1;
		index++;

	}
	return (counter);


}
