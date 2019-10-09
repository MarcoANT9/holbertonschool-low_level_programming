#include "holberton.h"

/**
 * _puts_recursion - Prints a string.
 *
 * @s: String to print.
 *
 *
 * Description - Prints a string character per character using recursion.
 *
 * Return - Nothing (void).
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(++s);
}
