#include "holberton.h"

/**
 * print_line - Prints a line according to the argument size
 *
 * @n: Size of the line to print on the terminal
 *
 *
 *
 * Return: Nothing (void)
 *
 *
 */

void print_line(int n)
{
	int i;


	if (n > 0)
	{

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

	else
	{

		_putchar('\n');
	}

}
