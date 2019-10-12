#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minumul ammount of coins to make change for an amount of.
 *        money
 *
 * @argc: Count of arguments the function takes.
 * @argv: Array of pointers to the string of the arguments.
 *
 *
 * Description - 
 *
 *
 *
 *
 *
 * Return: → 0 if successfull.
 *         → 1 if failure.
 */

int main(int argc, char *argv[])
{

      
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
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
		return (0);
	}

	return (0);
}
