#include "holberton.h"

/**
 * puts_half - Prints half a string starts with the middle
 *
 * @s: The string to be printed
 *
 * Return: Nothing (void)
 */



void puts_half(char *s)
{
	int i = 0;
	char a = *s;

	while (a != '\0')
	{
		i = i + 1;
		a = *(s + i);
	}

	if (i % 2 != 0)
	{
		i = i + 1;
	}

	i = i / 2;
	a = *(s + i);

	while (a != '\0')
	{
		if (a != '\n')
		{
			_putchar(a);
		}
		i = i + 1;
		a = *(s + i);
	}
	_putchar('\n');
}
