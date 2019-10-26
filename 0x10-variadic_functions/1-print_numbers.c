#include "variadic_functions.h"

/**
 * print_numbers - Prints a series of numbers.
 *
 * @separator: String to separate the numbers.
 * @n: Number of numbers to print.
 *
 * Description - This program takes an arbitrary number of int arguments and
 *               prints them using the separator specified in the argument.
 *
 * Return: Nothing (Void).
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int j = 0;
	va_list char_list;


	va_start(char_list, n);


	while (i < n)
	{

		j = 0;
		printf("%d", (va_arg(char_list, int)));

		if (!(separator == NULL))
		{
			if (!((i + 1) == n))
			{
				while (separator[j] != '\0')
				{
					printf("%c", separator[j]);
					j++;
				}
			}
		}

		i++;
	}
	printf("\n");
}
