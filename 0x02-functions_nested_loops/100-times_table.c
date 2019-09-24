#include "holberton.h"

/**
 * print_times_table - Prints the n times table starting with 0.
 *
 * @n: Number to take the table
 *
 * Return: Nothing (Void)
 *
 *
 *
 */

void print_times_table(int n)
{
	int i, j, res;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				res = i * j;
				if (j != 0)
				{
					_putchar(' ');
					if ((res / 100) == 0)
					{
						_putchar(' '), _putchar(' ');
					}
				}
				if ((res / 10) == 0)
				{
					_putchar(res + '0');
				}
				else
				{
					if ((res / 100) != 0)
					{
						_putchar((res / 100) + '0');
					}
					_putchar((res / 10) + '0'), _putchar((re
s % 10) + '0');
				}
				if (j != n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
