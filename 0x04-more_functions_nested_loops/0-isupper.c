#include "holberton.h"

/**
 * _isupper - This function determines if a character is an uppercase.
 *
 * @c: Character to evaluate
 *
 * Return: 1 if c is an uppercase
 *         0 if c is not an uppercase
 *
 *
 */


int _isupper(int c)
{

	if ((c <= 90) && (c >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
