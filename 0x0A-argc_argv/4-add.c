#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the sum of a group of numbers.
 *
 * @argc: Count of arguments the function takes.
 * @argv: Array of pointers to the string of the arguments.
 *
 *
 * Description - This program takes the numbers writen in the standard input
 *               and sums them into a simple result; if no numbers are input
 *               it will print "0" and return success. If there are characters
 *               that are no numbers in the input, the program prints "Error"
 *               and returns failure.
 *
 * Return: → 0 if successfull.
 *         → 1 if failure.
 */

int main(int argc, char *argv[])
{

	int sum, i;

	if (argc == 1)
	{
		printf("0\n");
	}

	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{

			if ((*argv[i] >= 48 && *argv[i] <= 57) || *argv[i] == 45
)
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
