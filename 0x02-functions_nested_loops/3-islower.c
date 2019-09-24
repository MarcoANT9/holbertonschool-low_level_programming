#include "holberton.h"

/**
 * _islower - Says if the parameter C is in lowercase
 *
 * @c: Input, the letter to determine, in ascii code
 *
 * description - Takes C as parameter and determines if is in lowercase
 *
 *
 * Return: Always 0 (success)
 *
 */




int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}


}
