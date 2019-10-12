#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints all the arguments it receives.
 *
 * @argc: Count of arguments the function takes.
 * @argv: Array of pointers to the string of the arguments.
 *
 *
 * Description - This program will write all the arguments it receives
 *               separing them with a new line, including it's own name.
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
