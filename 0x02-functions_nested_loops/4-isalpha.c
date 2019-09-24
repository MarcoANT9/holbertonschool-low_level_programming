#include "holberton.h"

/**
 * _isalpha - Determines if the parameter is a letter of the alphabeth
 *
 * @c: The letter to test if it is lowercase or uppercase
 *
 * description - Determines if the input is a letter of the alphabet, be it in
 * lowercase or uppercase.
 *
 * Return: 1 if is a letter; 0 if it is not.
 *
 *
 */


int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
