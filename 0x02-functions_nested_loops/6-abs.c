#include "holberton.h"

/**
 * _abs - Gets the absolute value of a number.
 *
 * @c: Number to get absolute value
 *
 * description - Multiplies by -1 if the number is lower than zero
 *
 * Return: The number c
 *
 *
 */


int _abs(int c)
{

	if (c < 0)
	{
		c = c * -1;
	}

	return (c);

}
