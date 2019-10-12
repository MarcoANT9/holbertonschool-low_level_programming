#include "holberton.h"
#include <stdio.h>


/**
 * main - Prints the number of arguments in the function.
 *
 * @argc: Count of arguments the function takes.
 * @argv: Array of pointers to the string of the arguments.
 *
 *
 * Description - This program will print the number of arguments that enters
 *               it.
 *
 * Return: Always succesfull (0).
 */

int main(int argc, __attribute__((unused)) char **argv)
{

	printf("%d\n", argc - 1);

	return (0);
}
