#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @c: Number we want the last digit
 *
 * Descripton - prints the last digit of a number using the % operant
 *
 *
 * Return: Returns the value of the last digit
 *
 */

int print_last_digit(int c)
{

	if (c < 0)
	{
		c = c * -1;

	}

	c = c % 10;

	_putchar (c + '0');

	return (c);


}
