#include "holberton.h"

/**
 * print_binary - Prints a number in bin
 *
 * @n: Decimal number to convert into binary.
 *
 *
 * Description - This program takes a unsigned integer and converts it into
 *               binary.
 *
 * Return: Nothing (Void).
 */



void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
