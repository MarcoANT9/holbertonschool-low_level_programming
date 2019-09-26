#include "holberton.h"

/**
 * print_number - Prints an integer number
 *
 * @n: Number to be printed
 *
 * Return: Nothing (void)
 *
 */

void print_number(int n)
{
	int i = 0, base = 1, j, ch, tmp = 1, m;

	if (n == 0)
	{
		_putchar('0');
	}
	m = n / 10;
	while ((m % base) != m)
	{
		i = i + 1;
		base = base * 10;
	}
	for (j = 0; j < i; j++)
	{
		if (tmp == 1)
		{
			if (m < 0)
			{
				_putchar ('-');
				ch = (n / base) * -1;
			}
			else
			{
				ch = (n / base);
			}
			_putchar(ch + '0');
			base = base / 10;
			tmp = 0;
		}
		if (m < 0)
		{
			ch = ((n / base) % 10) * -1;
		}
		else
		{
			ch = ((n / base) % 10);
		}
		base = base / 10;
		_putchar(ch + '0');
	}
}
