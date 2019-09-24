#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * description - Prints the alphabet in order 10 times, perfect for soup.
 *
 * Return: Nothing
 */



void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 11; i++)
	{

		for (a = 'a' ; a <= 'z' ; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}

}
