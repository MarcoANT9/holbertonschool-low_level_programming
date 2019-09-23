#include "holberton.h"

/**
 * main - Prints "Holberton"
 *
 * descripton - see "main"
 *
 * Return: Always 0 (success)
 */


int _putchar(char c);

int main(void)
{
	int i;

	char a[9] = "Holberton";

	for (i = 0; i < 9; i++)
	{

		_putchar(a[i]);

	}

	_putchar('\n');

	return (0);

}
