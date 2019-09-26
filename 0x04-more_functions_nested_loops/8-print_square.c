#include "holberton.h"

/**
 * print_square - Prints a square with a determined size
 *
 * @size: Determines the size of the square (side)
 *
 * Return: Nothing (void)
 *
 *
 */

void print_square(int size)
{

	int i;
	int j;

	if (size > 0)
	{


		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}

			_putchar('\n');

		}
	}

	else
	{
		_putchar('\n');
	}
}
