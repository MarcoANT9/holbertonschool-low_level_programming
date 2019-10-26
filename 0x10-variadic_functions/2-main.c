#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_strings(", ", 2, "Jay", "Django");
	print_strings("...", 3, "Jay", "Django", "Im Australian");
	print_strings(", ", 3, "This Guy", NULL, "Django");


	return (0);
}
