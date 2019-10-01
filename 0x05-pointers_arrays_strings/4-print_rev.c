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
	int j;

	while (!(a == '\0'))
	{
		i = i + 1;
		a = *(s + i);
	}

	for (j = i ; j >= 5; j--)
	{
		if (a != '\0')
		{
			_putchar(a);
		}
		a = *(s + j);
	}
	_putchar('\n');
}
