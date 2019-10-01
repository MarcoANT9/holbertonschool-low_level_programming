#include "holberton.h"

/**
 * print_rev - Prints a string in reverse to the std output
 *
 * @s: The string to be printed
 *
 *
 * Return: Nothing (void)
 */



void print_rev(char *s)
{
	int i = 0;
	char a = *s;

	while (a != '\0')
	{
		i = i + 1;
		a = *(s + i);
	}

	while (i >= 0)
	{
		_putchar(a);
		i = i - 1;
		a = *(s + i);
	}

	_putchar('\n');
}
