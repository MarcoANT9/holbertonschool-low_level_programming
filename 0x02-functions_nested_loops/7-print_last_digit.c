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

	int j;

	j = c % 10;

	if (j <= 0)
	{
		j = j * -1;

	}

    	_putchar (j + '0');

	return (j);


}
