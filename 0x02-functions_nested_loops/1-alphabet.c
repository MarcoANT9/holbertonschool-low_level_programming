#include "holberton.h"

/**
 * print_alphabet - Just what it says on the name
 *
 * description - Prints the alphabet in order
 *
 * Return: Nothing
 */



void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		_putchar(a);
	}

	_putchar('\n');


}
