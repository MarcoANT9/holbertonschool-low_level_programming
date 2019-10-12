#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the product of two numbers.
 *
 * @argc: Count of arguments the function takes.
 * @argv: Array of pointers to the string of the arguments.
 *
 *
 * Description - This function takes two numbers from the standard input
 *               and multiplies them to get their product; if the number
 *               of arguments is different than two, the program prints
 *               "Error" and returns 1.
 *
 * Return: → 0 if there are two integer arguments (without counting the
 *           function name).
 *
 *         → 1 if there are not two arguments.
 */

int main(int argc, char **argv)
{
	long int mul;
	long int mul2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = strtol(argv[1], NULL, 10);
		mul2 = strtol(argv[2], NULL, 10);
		printf("%ld\n", mul * mul2);
		return (0);
	}
}
