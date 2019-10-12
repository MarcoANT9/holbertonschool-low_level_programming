#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints the name of the program
 *
 * @argc: Count of arguments the function takes.
 * @argv: Array of pointers to the string of the arguments.
 *
 *
 * Description - This program will write its own name regardless of what it
 *               is or if it's changed, without the need to compile every
 *               time.
 *
 *
 * Return: Always succesfull (0).
 */

int main(int argc, char **argv)
{

	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
