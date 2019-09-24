#include "holberton.h"

/**
 * print_sign - Prints the sign of a character
 *
 * @n: Character to test
 *
 * Return: 1 if is positive
 * 0 if is zero
 * -1 if is negative
 *
 *
 *
 */



int print_sign(int n)
{
	if (n > 0)
	{

		_putchar('+');
		return (1);

}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{

		_putchar('0');
		return (0);

	}

}
