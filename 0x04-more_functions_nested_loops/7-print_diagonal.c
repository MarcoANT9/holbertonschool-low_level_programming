#include "holberton.h"

/**
 * print_diagonal - Prints a diagonal line according to the argument size
 *
 * @n: Size of the diagonal to print on the terminal
 *
 *
 *
 * Return: Nothing (void)
 *
 *
 */

void print_diagonal(int n)
{
	int i;
	int j;


	if (n > 0)
	{

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

	else
	{

		_putchar('\n');
	}

}
