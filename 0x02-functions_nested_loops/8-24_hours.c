#include "holberton.h"

/**
 * jack_bauer - Prints a clock for 24 hours
 *
 *
 * descripton - prints a clock 24 hours style (Jack Bauer intensifies)
 *
 *
 * return: Nothing (void)
 *
 */


void jack_bauer(void)
{

	int h;
	int m;

	for (h = 0; h < 24; h++)
	{

		for (m = 0; m <= 59; m++)
		{

			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
		}

	}


}
