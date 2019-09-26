#include "holberton.h"
#include <math.h>

/**
 * print_number - Prints an integer number
 *
 * @n: Number to be printed
 *
 *
 * Return: Nothing (void)
 *
 */

void print_number(int n)
{
	int i = 0, ch, j, tmp, base = 1, base2, m = n;

	m = m + 1;

	if (n < 0)
	{
		n = n * -1;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	while ((n % base)  != n)
	{
		i = i + 1;
		base *= 10;
		tmp = (n % base);
	}
	base2 = base / 10;
	tmp = 1;

	for (j = 0; j < i; j++)
	{
		if (tmp == 1)
		{
			if (m < 0)
			{
				_putchar('-');
			}
			ch = (n / base2);
			_putchar(ch + '0');
			base2 = base2 / 10;
			tmp = 0;
		}
		else
		{
			ch = (n / base2) % 10;
			_putchar(ch + '0');
			base2 = base2 / 10;
		}
	}

}
