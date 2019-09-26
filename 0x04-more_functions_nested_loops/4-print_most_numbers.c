#include "holberton.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 excluding 2 and 4
 *
 *
 *
 * Return: Nothing (void)
 *
 *
 */

void print_most_numbers(void)
{

	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		j = i + '0';

		if ((j != 50) && (j != 52))
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
