#include "holberton.h"

/**
 * _isdigit - This function determines if a character is digit.
 *
 * @c: Character to evaluate
 *
 * Return: 1 if c is a digit
 *         0 if c is not a digit
 *
 *
 */


int _isdigit(int c)
{

	if ((c <= 57) && (c >= 48))
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
