#include "holberton.h"

/**
 * puts2 - Prints every other character of a string starts with the 1st
 *
 * @s: The string to be printed
 *
 *
 * Return: Nothing (void)
 */



void puts2(char *s)
{
	int i = 0;
	char a = *s;

	while (a != '\0')
	{
		if (i % 2 != 1)
		{
			_putchar(a);
		}
		i = i + 1;
		a = *(s + i);
	}
	_putchar('\n');
}
