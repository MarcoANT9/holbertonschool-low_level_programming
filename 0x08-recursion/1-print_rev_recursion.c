#include "holberton.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 *
 * @s: String to reverse
 *
 * Description - Prints a string in reverse using only one recursive function
 *
 * Return - Nothing (void)
 */

void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
