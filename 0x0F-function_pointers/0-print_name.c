#include "function_pointers.h"

/**
 * print_name - Prints the name given as an argument.
 *
 * @name: Name to print
 * @f: Pointer to a function which prints the name.
 *
 * Description - This program will print the name given to it by transfering
 *               it to other functions.
 *
 * Return: Nothing (void)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	f(name);
}
