#include "holberton.h"

/**
 * print_binary - Prints a number in bin
 *
 * @n: Decimal number to convert into binary.
 *
 *
 * Description - This program takes a unsigned integer and converts it into
 *               binary.
 *
 * Return: Nothing (Void).
 */



void print_binary(unsigned long int n)
{
	int counter = 0;
	char f;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}
	while ((n >> counter) != 0)
	{
		counter++;
	}
	counter--;
	while (counter >= 0)
	{
		f = ((n & (1 << counter)));

		if (f)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		counter--;
	}
}
