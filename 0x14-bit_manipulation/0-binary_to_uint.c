#include "holberton.h"

/**
 * two_power - Calculates the power of 2.
 *
 * @powa: The power to amplify 2.
 *
 *
 * Return: The power of 2 or 1 if the power is 0.
 */

unsigned int two_power(int powa)
{
	unsigned int base = 1;

	if (powa == 0)
	{
		return (1);
	}
	while (powa > 0)
	{
		base = base * 2;
		powa--;
	}
	return (base);
}

/**
 * binary_to_uint - Converts a number from binary to unsigned int.
 *
 * @b: String which contains the number in bin.
 *
 *
 * Description - This program takes a string of numbers and determines if
 *               it can be transformed to base 10. If the string contains
 *               any value different from 1 and 0, the program returns 0.
 *
 * Return: Integer equivalent to the input binary or zero if the number can't
 *         be transformed.
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	int counter = 0;
	unsigned int converter = 0;


	if (b == NULL)
	{
		return (0);
	}

	while (*(b + counter) != '\0')
	{
		if (*(b + counter) == '1' || *(b + counter) == '0')
		{
			counter++;
		}
		else
		{
			return (0);
		}
	}
	counter--;
	while (counter >= 0)
	{
		if (*(b + counter) == '0')
		{
			counter--;
			index++;
		}
		else
		{
			converter = converter + two_power(index);
			counter--;
			index++;
		}
	}
	return (converter);
}
