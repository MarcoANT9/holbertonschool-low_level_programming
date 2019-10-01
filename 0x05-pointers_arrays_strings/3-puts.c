#include "holberton.h"

/**
 * _puts - Prints a string to the std output
 *
 * @s: The string to be printed
 *
 *
 * Return: Nothing (void)
 */



void _puts(char *s)
{
	int i = 0;
	char a = *s;

	while (a != '\0')
	{
		_putchar(a);
		i = i + 1;
		a = *(s + i);
	}
	_putchar('\n');
}
